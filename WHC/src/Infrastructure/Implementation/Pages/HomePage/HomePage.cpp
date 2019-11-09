#include "HomePage.h"

HomePage::HomePage(IPageContext *pageContext) : _pageContext(pageContext),
                                                _backgroundColor(pageContext, 0x0000),
                                                _currentTimeLabel(pageContext, PageDirection::RowReverse, 79, 16, 5, 0xFFFF, 0x0000),
                                                _currentTimeBorder(pageContext, PageDirection::RowReverse, 5, 5, 230, 58, 0xFFE0),
                                                _currentUpperBoilerTemperatureLabel(pageContext, PageDirection::RowReverse, 79, 79, 5, 0xFFFF, 0x0000),
                                                _currentUpperBoilerTemperatureBorder(pageContext, PageDirection::RowReverse, 5, 68, 230, 58, 0xFFE0),
                                                _currentBottomBoilerTemperatureLabel(pageContext, PageDirection::RowReverse, 79, 142, 5, 0xFFFF, 0x0000),
                                                _currentBottomBoilerTemperatureBorder(pageContext, PageDirection::RowReverse, 5, 131, 230, 58, 0xFFE0),
                                                _currentRoomTemperatureLabel(pageContext, PageDirection::RowReverse, 79, 205, 5, 0xFFFF, 0x0000),
                                                _currentRoomTemperatureBorder(pageContext, PageDirection::RowReverse, 5, 194, 230, 58, 0xFFE0),
                                                _menuButton(pageContext, PageDirection::RowReverse, 5, 257, 230, 58, 0xF800, 0xFFE0)
{
}
void HomePage::Render()
{
    _backgroundColor.Render();
    _currentTimeLabel.Render(_pageContext->GetClockService()->GetDateTimeString("{hours}:{minutes}"));
    _currentTimeBorder.Render();
    _currentUpperBoilerTemperatureLabel.Render(_pageContext->GetUpperBoilerThermometerService()->GetTemperatureString());
    _currentUpperBoilerTemperatureBorder.Render();
    _currentBottomBoilerTemperatureLabel.Render(_pageContext->GetBottomBoilerThermometerService()->GetTemperatureString());
    _currentBottomBoilerTemperatureBorder.Render();
    _currentRoomTemperatureLabel.Render(_pageContext->GetRoomThermometerService()->GetTemperatureString());
    _currentRoomTemperatureBorder.Render();
    _menuButton.Render();
}
void HomePage::HandleTouch(Point rawTouchPoint)
{
    if (_menuButton.IsTouched(rawTouchPoint))
    {
    }
}