#ifndef _sun_awt_ComponentFactory_h_
#define _sun_awt_ComponentFactory_h_
//$ interface sun.awt.ComponentFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Button;
		class Canvas;
		class Checkbox;
		class CheckboxMenuItem;
		class Choice;
		class Component;
		class Desktop;
		class Dialog;
		class FileDialog;
		class Frame;
		class GraphicsDevice;
		class Label;
		class List;
		class Menu;
		class MenuBar;
		class MenuItem;
		class Panel;
		class PopupMenu;
		class ScrollPane;
		class Scrollbar;
		class Taskbar;
		class TextArea;
		class TextField;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DragSourceContextPeer;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ButtonPeer;
			class CanvasPeer;
			class CheckboxMenuItemPeer;
			class CheckboxPeer;
			class ChoicePeer;
			class DesktopPeer;
			class DialogPeer;
			class FileDialogPeer;
			class FontPeer;
			class FramePeer;
			class LabelPeer;
			class LightweightPeer;
			class ListPeer;
			class MenuBarPeer;
			class MenuItemPeer;
			class MenuPeer;
			class MouseInfoPeer;
			class PanelPeer;
			class PopupMenuPeer;
			class RobotPeer;
			class ScrollPanePeer;
			class ScrollbarPeer;
			class TaskbarPeer;
			class TextAreaPeer;
			class TextFieldPeer;
			class WindowPeer;
		}
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class DataTransferer;
		}
	}
}

namespace sun {
	namespace awt {

class $export ComponentFactory : public ::java::lang::Object {
	$interface(ComponentFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::peer::ButtonPeer* createButton(::java::awt::Button* target);
	virtual ::java::awt::peer::CanvasPeer* createCanvas(::java::awt::Canvas* target);
	virtual ::java::awt::peer::CheckboxPeer* createCheckbox(::java::awt::Checkbox* target);
	virtual ::java::awt::peer::CheckboxMenuItemPeer* createCheckboxMenuItem(::java::awt::CheckboxMenuItem* target);
	virtual ::java::awt::peer::ChoicePeer* createChoice(::java::awt::Choice* target);
	virtual ::java::awt::peer::LightweightPeer* createComponent(::java::awt::Component* target);
	virtual ::java::awt::peer::DesktopPeer* createDesktopPeer(::java::awt::Desktop* target);
	virtual ::java::awt::peer::DialogPeer* createDialog(::java::awt::Dialog* target);
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge);
	virtual ::java::awt::peer::FileDialogPeer* createFileDialog(::java::awt::FileDialog* target);
	virtual ::java::awt::peer::FramePeer* createFrame(::java::awt::Frame* target);
	virtual ::java::awt::peer::LabelPeer* createLabel(::java::awt::Label* target);
	virtual ::java::awt::peer::ListPeer* createList(::java::awt::List* target);
	virtual ::java::awt::peer::MenuPeer* createMenu(::java::awt::Menu* target);
	virtual ::java::awt::peer::MenuBarPeer* createMenuBar(::java::awt::MenuBar* target);
	virtual ::java::awt::peer::MenuItemPeer* createMenuItem(::java::awt::MenuItem* target);
	virtual ::java::awt::peer::PanelPeer* createPanel(::java::awt::Panel* target);
	virtual ::java::awt::peer::PopupMenuPeer* createPopupMenu(::java::awt::PopupMenu* target);
	virtual ::java::awt::peer::RobotPeer* createRobot(::java::awt::GraphicsDevice* screen);
	virtual ::java::awt::peer::ScrollPanePeer* createScrollPane(::java::awt::ScrollPane* target);
	virtual ::java::awt::peer::ScrollbarPeer* createScrollbar(::java::awt::Scrollbar* target);
	virtual ::java::awt::peer::TaskbarPeer* createTaskbarPeer(::java::awt::Taskbar* target);
	virtual ::java::awt::peer::TextAreaPeer* createTextArea(::java::awt::TextArea* target);
	virtual ::java::awt::peer::TextFieldPeer* createTextField(::java::awt::TextField* target);
	virtual ::java::awt::peer::WindowPeer* createWindow(::java::awt::Window* target);
	virtual ::sun::awt::datatransfer::DataTransferer* getDataTransferer();
	virtual ::java::awt::peer::FontPeer* getFontPeer($String* name, int32_t style);
	virtual ::java::awt::peer::MouseInfoPeer* getMouseInfoPeer();
};

	} // awt
} // sun

#endif // _sun_awt_ComponentFactory_h_