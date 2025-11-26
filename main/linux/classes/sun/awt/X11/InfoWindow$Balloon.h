#ifndef _sun_awt_X11_InfoWindow$Balloon_h_
#define _sun_awt_X11_InfoWindow$Balloon_h_
//$ class sun.awt.X11.InfoWindow$Balloon
//$ extends sun.awt.X11.InfoWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/InfoWindow.h>

#pragma push_macro("BALLOON_CAPTION_BACKGROUND_COLOR")
#undef BALLOON_CAPTION_BACKGROUND_COLOR
#pragma push_macro("BALLOON_CAPTION_FONT")
#undef BALLOON_CAPTION_FONT
#pragma push_macro("BALLOON_ICON_HEIGHT")
#undef BALLOON_ICON_HEIGHT
#pragma push_macro("BALLOON_ICON_WIDTH")
#undef BALLOON_ICON_WIDTH
#pragma push_macro("BALLOON_SHOW_TIME")
#undef BALLOON_SHOW_TIME
#pragma push_macro("BALLOON_TEXT_MAX_LENGTH")
#undef BALLOON_TEXT_MAX_LENGTH
#pragma push_macro("BALLOON_TRAY_ICON_INDENT")
#undef BALLOON_TRAY_ICON_INDENT
#pragma push_macro("BALLOON_WORD_LINE_MAX_COUNT")
#undef BALLOON_WORD_LINE_MAX_COUNT
#pragma push_macro("BALLOON_WORD_LINE_MAX_LENGTH")
#undef BALLOON_WORD_LINE_MAX_LENGTH

namespace java {
	namespace awt {
		class Button;
		class Color;
		class Font;
		class Frame;
		class Image;
		class Label;
		class Panel;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Balloon$ActionPerformer;
			class InfoWindow$Balloon$Displayer;
			class InfoWindow$Balloon$LiveArguments;
			class XTrayIconPeer$IconCanvas;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Balloon : public ::sun::awt::X11::InfoWindow {
	$class(InfoWindow$Balloon, 0, ::sun::awt::X11::InfoWindow)
public:
	InfoWindow$Balloon();
	using ::sun::awt::X11::InfoWindow::add;
	using ::sun::awt::X11::InfoWindow::isFocusCycleRoot;
	using ::sun::awt::X11::InfoWindow::getMousePosition;
	using ::sun::awt::X11::InfoWindow::list;
	void init$(::java::awt::Frame* parent, Object$* target, ::sun::awt::X11::InfoWindow$Balloon$LiveArguments* liveArguments);
	void _display($String* caption, $String* text, $String* messageType);
	virtual void display($String* caption, $String* text, $String* messageType);
	virtual void dispose() override;
	void loadGtkImages();
	using ::sun::awt::X11::InfoWindow::show;
	using ::sun::awt::X11::InfoWindow::remove;
	::sun::awt::X11::InfoWindow$Balloon$LiveArguments* liveArguments = nullptr;
	$Object* target = nullptr;
	static const int32_t BALLOON_SHOW_TIME = 10000;
	static const int32_t BALLOON_TEXT_MAX_LENGTH = 256;
	static const int32_t BALLOON_WORD_LINE_MAX_LENGTH = 16;
	static const int32_t BALLOON_WORD_LINE_MAX_COUNT = 4;
	static const int32_t BALLOON_ICON_WIDTH = 32;
	static const int32_t BALLOON_ICON_HEIGHT = 32;
	static const int32_t BALLOON_TRAY_ICON_INDENT = 0;
	static ::java::awt::Color* BALLOON_CAPTION_BACKGROUND_COLOR;
	static ::java::awt::Font* BALLOON_CAPTION_FONT;
	::java::awt::Panel* mainPanel = nullptr;
	::java::awt::Panel* captionPanel = nullptr;
	::java::awt::Label* captionLabel = nullptr;
	::java::awt::Button* closeButton = nullptr;
	::java::awt::Panel* textPanel = nullptr;
	::sun::awt::X11::XTrayIconPeer$IconCanvas* iconCanvas = nullptr;
	$Array<::java::awt::Label>* lineLabels = nullptr;
	::sun::awt::X11::InfoWindow$Balloon$ActionPerformer* ap = nullptr;
	::java::awt::Image* iconImage = nullptr;
	::java::awt::Image* errorImage = nullptr;
	::java::awt::Image* warnImage = nullptr;
	::java::awt::Image* infoImage = nullptr;
	bool gtkImagesLoaded = false;
	::sun::awt::X11::InfoWindow$Balloon$Displayer* displayer = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BALLOON_CAPTION_BACKGROUND_COLOR")
#pragma pop_macro("BALLOON_CAPTION_FONT")
#pragma pop_macro("BALLOON_ICON_HEIGHT")
#pragma pop_macro("BALLOON_ICON_WIDTH")
#pragma pop_macro("BALLOON_SHOW_TIME")
#pragma pop_macro("BALLOON_TEXT_MAX_LENGTH")
#pragma pop_macro("BALLOON_TRAY_ICON_INDENT")
#pragma pop_macro("BALLOON_WORD_LINE_MAX_COUNT")
#pragma pop_macro("BALLOON_WORD_LINE_MAX_LENGTH")

#endif // _sun_awt_X11_InfoWindow$Balloon_h_