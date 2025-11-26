#include <sun/awt/ComponentFactory.h>

#include <java/awt/AWTException.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Desktop.h>
#include <java/awt/Dialog.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Label.h>
#include <java/awt/List.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Panel.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/Taskbar.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextField.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/peer/ButtonPeer.h>
#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/peer/ChoicePeer.h>
#include <java/awt/peer/DesktopPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/LabelPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/awt/peer/ListPeer.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <java/awt/peer/RobotPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <java/awt/peer/TaskbarPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/awt/LightweightPeerHolder.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

using $AWTException = ::java::awt::AWTException;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Desktop = ::java::awt::Desktop;
using $Dialog = ::java::awt::Dialog;
using $FileDialog = ::java::awt::FileDialog;
using $Frame = ::java::awt::Frame;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $HeadlessException = ::java::awt::HeadlessException;
using $Label = ::java::awt::Label;
using $List = ::java::awt::List;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuItem = ::java::awt::MenuItem;
using $Panel = ::java::awt::Panel;
using $PopupMenu = ::java::awt::PopupMenu;
using $ScrollPane = ::java::awt::ScrollPane;
using $Scrollbar = ::java::awt::Scrollbar;
using $Taskbar = ::java::awt::Taskbar;
using $TextArea = ::java::awt::TextArea;
using $TextField = ::java::awt::TextField;
using $Window = ::java::awt::Window;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FontPeer = ::java::awt::peer::FontPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $LightweightPeerHolder = ::sun::awt::LightweightPeerHolder;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {

$MethodInfo _ComponentFactory_MethodInfo_[] = {
	{"createButton", "(Ljava/awt/Button;)Ljava/awt/peer/ButtonPeer;", nullptr, $PUBLIC},
	{"createCanvas", "(Ljava/awt/Canvas;)Ljava/awt/peer/CanvasPeer;", nullptr, $PUBLIC},
	{"createCheckbox", "(Ljava/awt/Checkbox;)Ljava/awt/peer/CheckboxPeer;", nullptr, $PUBLIC},
	{"createCheckboxMenuItem", "(Ljava/awt/CheckboxMenuItem;)Ljava/awt/peer/CheckboxMenuItemPeer;", nullptr, $PUBLIC},
	{"createChoice", "(Ljava/awt/Choice;)Ljava/awt/peer/ChoicePeer;", nullptr, $PUBLIC},
	{"createComponent", "(Ljava/awt/Component;)Ljava/awt/peer/LightweightPeer;", nullptr, $PUBLIC},
	{"createDesktopPeer", "(Ljava/awt/Desktop;)Ljava/awt/peer/DesktopPeer;", nullptr, $PUBLIC},
	{"createDialog", "(Ljava/awt/Dialog;)Ljava/awt/peer/DialogPeer;", nullptr, $PUBLIC},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC},
	{"createFileDialog", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PUBLIC},
	{"createFrame", "(Ljava/awt/Frame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC},
	{"createLabel", "(Ljava/awt/Label;)Ljava/awt/peer/LabelPeer;", nullptr, $PUBLIC},
	{"createList", "(Ljava/awt/List;)Ljava/awt/peer/ListPeer;", nullptr, $PUBLIC},
	{"createMenu", "(Ljava/awt/Menu;)Ljava/awt/peer/MenuPeer;", nullptr, $PUBLIC},
	{"createMenuBar", "(Ljava/awt/MenuBar;)Ljava/awt/peer/MenuBarPeer;", nullptr, $PUBLIC},
	{"createMenuItem", "(Ljava/awt/MenuItem;)Ljava/awt/peer/MenuItemPeer;", nullptr, $PUBLIC},
	{"createPanel", "(Ljava/awt/Panel;)Ljava/awt/peer/PanelPeer;", nullptr, $PUBLIC},
	{"createPopupMenu", "(Ljava/awt/PopupMenu;)Ljava/awt/peer/PopupMenuPeer;", nullptr, $PUBLIC},
	{"createRobot", "(Ljava/awt/GraphicsDevice;)Ljava/awt/peer/RobotPeer;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createScrollPane", "(Ljava/awt/ScrollPane;)Ljava/awt/peer/ScrollPanePeer;", nullptr, $PUBLIC},
	{"createScrollbar", "(Ljava/awt/Scrollbar;)Ljava/awt/peer/ScrollbarPeer;", nullptr, $PUBLIC},
	{"createTaskbarPeer", "(Ljava/awt/Taskbar;)Ljava/awt/peer/TaskbarPeer;", nullptr, $PUBLIC},
	{"createTextArea", "(Ljava/awt/TextArea;)Ljava/awt/peer/TextAreaPeer;", nullptr, $PUBLIC},
	{"createTextField", "(Ljava/awt/TextField;)Ljava/awt/peer/TextFieldPeer;", nullptr, $PUBLIC},
	{"createWindow", "(Ljava/awt/Window;)Ljava/awt/peer/WindowPeer;", nullptr, $PUBLIC},
	{"getDataTransferer", "()Lsun/awt/datatransfer/DataTransferer;", nullptr, $PUBLIC},
	{"getFontPeer", "(Ljava/lang/String;I)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC},
	{"getMouseInfoPeer", "()Ljava/awt/peer/MouseInfoPeer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComponentFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.ComponentFactory",
	nullptr,
	nullptr,
	nullptr,
	_ComponentFactory_MethodInfo_
};

$Object* allocate$ComponentFactory($Class* clazz) {
	return $of($alloc(ComponentFactory));
}

$LightweightPeer* ComponentFactory::createComponent($Component* target) {
	$init($LightweightPeerHolder);
	return $LightweightPeerHolder::lightweightMarker;
}

$DesktopPeer* ComponentFactory::createDesktopPeer($Desktop* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$TaskbarPeer* ComponentFactory::createTaskbarPeer($Taskbar* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$ButtonPeer* ComponentFactory::createButton($Button* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$TextFieldPeer* ComponentFactory::createTextField($TextField* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$LabelPeer* ComponentFactory::createLabel($Label* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$ListPeer* ComponentFactory::createList($List* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$CheckboxPeer* ComponentFactory::createCheckbox($Checkbox* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$ScrollbarPeer* ComponentFactory::createScrollbar($Scrollbar* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$ScrollPanePeer* ComponentFactory::createScrollPane($ScrollPane* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$TextAreaPeer* ComponentFactory::createTextArea($TextArea* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$ChoicePeer* ComponentFactory::createChoice($Choice* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$FramePeer* ComponentFactory::createFrame($Frame* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$CanvasPeer* ComponentFactory::createCanvas($Canvas* target) {
	return $cast($CanvasPeer, createComponent(target));
}

$PanelPeer* ComponentFactory::createPanel($Panel* target) {
	return $cast($PanelPeer, createComponent(target));
}

$WindowPeer* ComponentFactory::createWindow($Window* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$DialogPeer* ComponentFactory::createDialog($Dialog* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$MenuBarPeer* ComponentFactory::createMenuBar($MenuBar* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$MenuPeer* ComponentFactory::createMenu($Menu* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$PopupMenuPeer* ComponentFactory::createPopupMenu($PopupMenu* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$MenuItemPeer* ComponentFactory::createMenuItem($MenuItem* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$FileDialogPeer* ComponentFactory::createFileDialog($FileDialog* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$CheckboxMenuItemPeer* ComponentFactory::createCheckboxMenuItem($CheckboxMenuItem* target) {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$DragSourceContextPeer* ComponentFactory::createDragSourceContextPeer($DragGestureEvent* dge) {
	$throwNew($InvalidDnDOperationException, "Headless environment"_s);
	$shouldNotReachHere();
}

$FontPeer* ComponentFactory::getFontPeer($String* name, int32_t style) {
	return nullptr;
}

$RobotPeer* ComponentFactory::createRobot($GraphicsDevice* screen) {
	$useLocalCurrentObjectStackCache();
	$throwNew($AWTException, $($String::format("Unsupported device: %s"_s, $$new($ObjectArray, {$of(screen)}))));
	$shouldNotReachHere();
}

$DataTransferer* ComponentFactory::getDataTransferer() {
	return nullptr;
}

$MouseInfoPeer* ComponentFactory::getMouseInfoPeer() {
	$throwNew($UnsupportedOperationException, "Not implemented"_s);
	$shouldNotReachHere();
}

$Class* ComponentFactory::load$($String* name, bool initialize) {
	$loadClass(ComponentFactory, name, initialize, &_ComponentFactory_ClassInfo_, allocate$ComponentFactory);
	return class$;
}

$Class* ComponentFactory::class$ = nullptr;

	} // awt
} // sun