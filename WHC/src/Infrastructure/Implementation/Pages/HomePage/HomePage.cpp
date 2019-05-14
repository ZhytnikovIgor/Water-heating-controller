#include "HomePage.h"

HomePage::HomePage(IPageContext *pageContext) : _pageContext(pageContext),
                                                _testButton(pageContext, PageDirection::ColumnReverse, 0, 0, 80, 40, 0xF800, 0xFFE0) {}
void HomePage::Render()
{
    _testButton.Render();
}
void HomePage::HandleTouch(Point rawTouchPoint)
{
    if (_testButton.IsTouched(rawTouchPoint))
    {
    }
}