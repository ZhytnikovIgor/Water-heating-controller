#pragma once
#include "..\..\..\Interfaces\IPage.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\Implementation\Elements\BackgroundColor\BackgroundColor.h"
#include "..\..\..\Implementation\Elements\Button\Button.h"
#include "..\..\..\Implementation\Elements\StaticLabel\StaticLabel.h"
#include "..\..\..\Implementation\Elements\StateLabel\StateLabel.h"
#include "..\..\..\Implementation\Elements\Rectangle\Rectangle.h"
#include "..\..\..\..\Infrastructure\Enumerations\PageDirection.h"

class HomePage : public IPage
{
private:
    IPageContext *_pageContext;
    BackgroundColor _backgroundColor;
    StateLabel _currentTimeLabel;
    Rectangle _currentTimeBorder;
    StateLabel _currentUpperBoilerTemperatureLabel;
    Rectangle _currentUpperBoilerTemperatureBorder;
    StateLabel _currentBottomBoilerTemperatureLabel;
    Rectangle _currentBottomBoilerTemperatureBorder;
    StateLabel _currentRoomTemperatureLabel;
    Rectangle _currentRoomTemperatureBorder;
    Button _menuButton;

public:
    HomePage(IPageContext *pageContext);
    void Render();
    void HandleTouch(Point rawTouchPoint);
};