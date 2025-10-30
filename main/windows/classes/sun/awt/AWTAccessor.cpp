#include <sun/awt/AWTAccessor.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>
#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>
#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor$CursorAccessor.h>
#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor$DragSourceContextAccessor.h>
#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>
#include <sun/awt/AWTAccessor$EventQueueAccessor.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor$MenuAccessor.h>
#include <sun/awt/AWTAccessor$MenuBarAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor$MenuItemAccessor.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>
#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>
#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>
#include <sun/awt/AWTAccessor$SystemColorAccessor.h>
#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>
#include <sun/awt/AWTAccessor$ToolkitAccessor.h>
#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $FileDialog = ::java::awt::FileDialog;
using $Frame = ::java::awt::Frame;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $MenuComponent = ::java::awt::MenuComponent;
using $PopupMenu = ::java::awt::PopupMenu;
using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$AccessibleBundleAccessor = ::sun::awt::AWTAccessor$AccessibleBundleAccessor;
using $AWTAccessor$AccessibleContextAccessor = ::sun::awt::AWTAccessor$AccessibleContextAccessor;
using $AWTAccessor$CheckboxMenuItemAccessor = ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;
using $AWTAccessor$CursorAccessor = ::sun::awt::AWTAccessor$CursorAccessor;
using $AWTAccessor$DefaultKeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor;
using $AWTAccessor$DragSourceContextAccessor = ::sun::awt::AWTAccessor$DragSourceContextAccessor;
using $AWTAccessor$DropTargetContextAccessor = ::sun::awt::AWTAccessor$DropTargetContextAccessor;
using $AWTAccessor$EventQueueAccessor = ::sun::awt::AWTAccessor$EventQueueAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;
using $AWTAccessor$InvocationEventAccessor = ::sun::awt::AWTAccessor$InvocationEventAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $AWTAccessor$MenuAccessor = ::sun::awt::AWTAccessor$MenuAccessor;
using $AWTAccessor$MenuBarAccessor = ::sun::awt::AWTAccessor$MenuBarAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AWTAccessor$MenuItemAccessor = ::sun::awt::AWTAccessor$MenuItemAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $AWTAccessor$PopupMenuAccessor = ::sun::awt::AWTAccessor$PopupMenuAccessor;
using $AWTAccessor$ScrollPaneAdjustableAccessor = ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor;
using $AWTAccessor$SequencedEventAccessor = ::sun::awt::AWTAccessor$SequencedEventAccessor;
using $AWTAccessor$SystemColorAccessor = ::sun::awt::AWTAccessor$SystemColorAccessor;
using $AWTAccessor$SystemTrayAccessor = ::sun::awt::AWTAccessor$SystemTrayAccessor;
using $AWTAccessor$ToolkitAccessor = ::sun::awt::AWTAccessor$ToolkitAccessor;
using $AWTAccessor$TrayIconAccessor = ::sun::awt::AWTAccessor$TrayIconAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;

namespace sun {
	namespace awt {

$FieldInfo _AWTAccessor_FieldInfo_[] = {
	{"componentAccessor", "Lsun/awt/AWTAccessor$ComponentAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, componentAccessor)},
	{"containerAccessor", "Lsun/awt/AWTAccessor$ContainerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, containerAccessor)},
	{"windowAccessor", "Lsun/awt/AWTAccessor$WindowAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, windowAccessor)},
	{"awtEventAccessor", "Lsun/awt/AWTAccessor$AWTEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, awtEventAccessor)},
	{"inputEventAccessor", "Lsun/awt/AWTAccessor$InputEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, inputEventAccessor)},
	{"mouseEventAccessor", "Lsun/awt/AWTAccessor$MouseEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, mouseEventAccessor)},
	{"frameAccessor", "Lsun/awt/AWTAccessor$FrameAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, frameAccessor)},
	{"kfmAccessor", "Lsun/awt/AWTAccessor$KeyboardFocusManagerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, kfmAccessor)},
	{"menuComponentAccessor", "Lsun/awt/AWTAccessor$MenuComponentAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, menuComponentAccessor)},
	{"eventQueueAccessor", "Lsun/awt/AWTAccessor$EventQueueAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, eventQueueAccessor)},
	{"popupMenuAccessor", "Lsun/awt/AWTAccessor$PopupMenuAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, popupMenuAccessor)},
	{"fileDialogAccessor", "Lsun/awt/AWTAccessor$FileDialogAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, fileDialogAccessor)},
	{"scrollPaneAdjustableAccessor", "Lsun/awt/AWTAccessor$ScrollPaneAdjustableAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, scrollPaneAdjustableAccessor)},
	{"checkboxMenuItemAccessor", "Lsun/awt/AWTAccessor$CheckboxMenuItemAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, checkboxMenuItemAccessor)},
	{"cursorAccessor", "Lsun/awt/AWTAccessor$CursorAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, cursorAccessor)},
	{"menuBarAccessor", "Lsun/awt/AWTAccessor$MenuBarAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, menuBarAccessor)},
	{"menuItemAccessor", "Lsun/awt/AWTAccessor$MenuItemAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, menuItemAccessor)},
	{"menuAccessor", "Lsun/awt/AWTAccessor$MenuAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, menuAccessor)},
	{"keyEventAccessor", "Lsun/awt/AWTAccessor$KeyEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, keyEventAccessor)},
	{"clientPropertyKeyAccessor", "Lsun/awt/AWTAccessor$ClientPropertyKeyAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, clientPropertyKeyAccessor)},
	{"systemTrayAccessor", "Lsun/awt/AWTAccessor$SystemTrayAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, systemTrayAccessor)},
	{"trayIconAccessor", "Lsun/awt/AWTAccessor$TrayIconAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, trayIconAccessor)},
	{"defaultKeyboardFocusManagerAccessor", "Lsun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, defaultKeyboardFocusManagerAccessor)},
	{"sequencedEventAccessor", "Lsun/awt/AWTAccessor$SequencedEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, sequencedEventAccessor)},
	{"toolkitAccessor", "Lsun/awt/AWTAccessor$ToolkitAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, toolkitAccessor)},
	{"invocationEventAccessor", "Lsun/awt/AWTAccessor$InvocationEventAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, invocationEventAccessor)},
	{"systemColorAccessor", "Lsun/awt/AWTAccessor$SystemColorAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, systemColorAccessor)},
	{"accessibleContextAccessor", "Lsun/awt/AWTAccessor$AccessibleContextAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, accessibleContextAccessor)},
	{"accessibleBundleAccessor", "Lsun/awt/AWTAccessor$AccessibleBundleAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, accessibleBundleAccessor)},
	{"dragSourceContextAccessor", "Lsun/awt/AWTAccessor$DragSourceContextAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, dragSourceContextAccessor)},
	{"dropTargetContextAccessor", "Lsun/awt/AWTAccessor$DropTargetContextAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(AWTAccessor, dropTargetContextAccessor)},
	{}
};

$MethodInfo _AWTAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AWTAccessor::*)()>(&AWTAccessor::init$))},
	{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&AWTAccessor::ensureClassInitialized))},
	{"getAWTEventAccessor", "()Lsun/awt/AWTAccessor$AWTEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$AWTEventAccessor*(*)()>(&AWTAccessor::getAWTEventAccessor))},
	{"getAccessibleBundleAccessor", "()Lsun/awt/AWTAccessor$AccessibleBundleAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$AccessibleBundleAccessor*(*)()>(&AWTAccessor::getAccessibleBundleAccessor))},
	{"getAccessibleContextAccessor", "()Lsun/awt/AWTAccessor$AccessibleContextAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$AccessibleContextAccessor*(*)()>(&AWTAccessor::getAccessibleContextAccessor))},
	{"getCheckboxMenuItemAccessor", "()Lsun/awt/AWTAccessor$CheckboxMenuItemAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$CheckboxMenuItemAccessor*(*)()>(&AWTAccessor::getCheckboxMenuItemAccessor))},
	{"getClientPropertyKeyAccessor", "()Lsun/awt/AWTAccessor$ClientPropertyKeyAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$ClientPropertyKeyAccessor*(*)()>(&AWTAccessor::getClientPropertyKeyAccessor))},
	{"getComponentAccessor", "()Lsun/awt/AWTAccessor$ComponentAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$ComponentAccessor*(*)()>(&AWTAccessor::getComponentAccessor))},
	{"getContainerAccessor", "()Lsun/awt/AWTAccessor$ContainerAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$ContainerAccessor*(*)()>(&AWTAccessor::getContainerAccessor))},
	{"getCursorAccessor", "()Lsun/awt/AWTAccessor$CursorAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$CursorAccessor*(*)()>(&AWTAccessor::getCursorAccessor))},
	{"getDefaultKeyboardFocusManagerAccessor", "()Lsun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$DefaultKeyboardFocusManagerAccessor*(*)()>(&AWTAccessor::getDefaultKeyboardFocusManagerAccessor))},
	{"getDragSourceContextAccessor", "()Lsun/awt/AWTAccessor$DragSourceContextAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$DragSourceContextAccessor*(*)()>(&AWTAccessor::getDragSourceContextAccessor))},
	{"getDropTargetContextAccessor", "()Lsun/awt/AWTAccessor$DropTargetContextAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$DropTargetContextAccessor*(*)()>(&AWTAccessor::getDropTargetContextAccessor))},
	{"getEventQueueAccessor", "()Lsun/awt/AWTAccessor$EventQueueAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$EventQueueAccessor*(*)()>(&AWTAccessor::getEventQueueAccessor))},
	{"getFileDialogAccessor", "()Lsun/awt/AWTAccessor$FileDialogAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$FileDialogAccessor*(*)()>(&AWTAccessor::getFileDialogAccessor))},
	{"getFrameAccessor", "()Lsun/awt/AWTAccessor$FrameAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$FrameAccessor*(*)()>(&AWTAccessor::getFrameAccessor))},
	{"getInputEventAccessor", "()Lsun/awt/AWTAccessor$InputEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$InputEventAccessor*(*)()>(&AWTAccessor::getInputEventAccessor))},
	{"getInvocationEventAccessor", "()Lsun/awt/AWTAccessor$InvocationEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$InvocationEventAccessor*(*)()>(&AWTAccessor::getInvocationEventAccessor))},
	{"getKeyEventAccessor", "()Lsun/awt/AWTAccessor$KeyEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$KeyEventAccessor*(*)()>(&AWTAccessor::getKeyEventAccessor))},
	{"getKeyboardFocusManagerAccessor", "()Lsun/awt/AWTAccessor$KeyboardFocusManagerAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$KeyboardFocusManagerAccessor*(*)()>(&AWTAccessor::getKeyboardFocusManagerAccessor))},
	{"getMenuAccessor", "()Lsun/awt/AWTAccessor$MenuAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$MenuAccessor*(*)()>(&AWTAccessor::getMenuAccessor))},
	{"getMenuBarAccessor", "()Lsun/awt/AWTAccessor$MenuBarAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$MenuBarAccessor*(*)()>(&AWTAccessor::getMenuBarAccessor))},
	{"getMenuComponentAccessor", "()Lsun/awt/AWTAccessor$MenuComponentAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$MenuComponentAccessor*(*)()>(&AWTAccessor::getMenuComponentAccessor))},
	{"getMenuItemAccessor", "()Lsun/awt/AWTAccessor$MenuItemAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$MenuItemAccessor*(*)()>(&AWTAccessor::getMenuItemAccessor))},
	{"getMouseEventAccessor", "()Lsun/awt/AWTAccessor$MouseEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$MouseEventAccessor*(*)()>(&AWTAccessor::getMouseEventAccessor))},
	{"getPopupMenuAccessor", "()Lsun/awt/AWTAccessor$PopupMenuAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$PopupMenuAccessor*(*)()>(&AWTAccessor::getPopupMenuAccessor))},
	{"getScrollPaneAdjustableAccessor", "()Lsun/awt/AWTAccessor$ScrollPaneAdjustableAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$ScrollPaneAdjustableAccessor*(*)()>(&AWTAccessor::getScrollPaneAdjustableAccessor))},
	{"getSequencedEventAccessor", "()Lsun/awt/AWTAccessor$SequencedEventAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$SequencedEventAccessor*(*)()>(&AWTAccessor::getSequencedEventAccessor))},
	{"getSystemColorAccessor", "()Lsun/awt/AWTAccessor$SystemColorAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$SystemColorAccessor*(*)()>(&AWTAccessor::getSystemColorAccessor))},
	{"getSystemTrayAccessor", "()Lsun/awt/AWTAccessor$SystemTrayAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$SystemTrayAccessor*(*)()>(&AWTAccessor::getSystemTrayAccessor))},
	{"getToolkitAccessor", "()Lsun/awt/AWTAccessor$ToolkitAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$ToolkitAccessor*(*)()>(&AWTAccessor::getToolkitAccessor))},
	{"getTrayIconAccessor", "()Lsun/awt/AWTAccessor$TrayIconAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$TrayIconAccessor*(*)()>(&AWTAccessor::getTrayIconAccessor))},
	{"getWindowAccessor", "()Lsun/awt/AWTAccessor$WindowAccessor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AWTAccessor$WindowAccessor*(*)()>(&AWTAccessor::getWindowAccessor))},
	{"setAWTEventAccessor", "(Lsun/awt/AWTAccessor$AWTEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$AWTEventAccessor*)>(&AWTAccessor::setAWTEventAccessor))},
	{"setAccessibleBundleAccessor", "(Lsun/awt/AWTAccessor$AccessibleBundleAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$AccessibleBundleAccessor*)>(&AWTAccessor::setAccessibleBundleAccessor))},
	{"setAccessibleContextAccessor", "(Lsun/awt/AWTAccessor$AccessibleContextAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$AccessibleContextAccessor*)>(&AWTAccessor::setAccessibleContextAccessor))},
	{"setCheckboxMenuItemAccessor", "(Lsun/awt/AWTAccessor$CheckboxMenuItemAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$CheckboxMenuItemAccessor*)>(&AWTAccessor::setCheckboxMenuItemAccessor))},
	{"setClientPropertyKeyAccessor", "(Lsun/awt/AWTAccessor$ClientPropertyKeyAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$ClientPropertyKeyAccessor*)>(&AWTAccessor::setClientPropertyKeyAccessor))},
	{"setComponentAccessor", "(Lsun/awt/AWTAccessor$ComponentAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$ComponentAccessor*)>(&AWTAccessor::setComponentAccessor))},
	{"setContainerAccessor", "(Lsun/awt/AWTAccessor$ContainerAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$ContainerAccessor*)>(&AWTAccessor::setContainerAccessor))},
	{"setCursorAccessor", "(Lsun/awt/AWTAccessor$CursorAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$CursorAccessor*)>(&AWTAccessor::setCursorAccessor))},
	{"setDefaultKeyboardFocusManagerAccessor", "(Lsun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$DefaultKeyboardFocusManagerAccessor*)>(&AWTAccessor::setDefaultKeyboardFocusManagerAccessor))},
	{"setDragSourceContextAccessor", "(Lsun/awt/AWTAccessor$DragSourceContextAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$DragSourceContextAccessor*)>(&AWTAccessor::setDragSourceContextAccessor))},
	{"setDropTargetContextAccessor", "(Lsun/awt/AWTAccessor$DropTargetContextAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$DropTargetContextAccessor*)>(&AWTAccessor::setDropTargetContextAccessor))},
	{"setEventQueueAccessor", "(Lsun/awt/AWTAccessor$EventQueueAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$EventQueueAccessor*)>(&AWTAccessor::setEventQueueAccessor))},
	{"setFileDialogAccessor", "(Lsun/awt/AWTAccessor$FileDialogAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$FileDialogAccessor*)>(&AWTAccessor::setFileDialogAccessor))},
	{"setFrameAccessor", "(Lsun/awt/AWTAccessor$FrameAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$FrameAccessor*)>(&AWTAccessor::setFrameAccessor))},
	{"setInputEventAccessor", "(Lsun/awt/AWTAccessor$InputEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$InputEventAccessor*)>(&AWTAccessor::setInputEventAccessor))},
	{"setInvocationEventAccessor", "(Lsun/awt/AWTAccessor$InvocationEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$InvocationEventAccessor*)>(&AWTAccessor::setInvocationEventAccessor))},
	{"setKeyEventAccessor", "(Lsun/awt/AWTAccessor$KeyEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$KeyEventAccessor*)>(&AWTAccessor::setKeyEventAccessor))},
	{"setKeyboardFocusManagerAccessor", "(Lsun/awt/AWTAccessor$KeyboardFocusManagerAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$KeyboardFocusManagerAccessor*)>(&AWTAccessor::setKeyboardFocusManagerAccessor))},
	{"setMenuAccessor", "(Lsun/awt/AWTAccessor$MenuAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$MenuAccessor*)>(&AWTAccessor::setMenuAccessor))},
	{"setMenuBarAccessor", "(Lsun/awt/AWTAccessor$MenuBarAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$MenuBarAccessor*)>(&AWTAccessor::setMenuBarAccessor))},
	{"setMenuComponentAccessor", "(Lsun/awt/AWTAccessor$MenuComponentAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$MenuComponentAccessor*)>(&AWTAccessor::setMenuComponentAccessor))},
	{"setMenuItemAccessor", "(Lsun/awt/AWTAccessor$MenuItemAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$MenuItemAccessor*)>(&AWTAccessor::setMenuItemAccessor))},
	{"setMouseEventAccessor", "(Lsun/awt/AWTAccessor$MouseEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$MouseEventAccessor*)>(&AWTAccessor::setMouseEventAccessor))},
	{"setPopupMenuAccessor", "(Lsun/awt/AWTAccessor$PopupMenuAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$PopupMenuAccessor*)>(&AWTAccessor::setPopupMenuAccessor))},
	{"setScrollPaneAdjustableAccessor", "(Lsun/awt/AWTAccessor$ScrollPaneAdjustableAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$ScrollPaneAdjustableAccessor*)>(&AWTAccessor::setScrollPaneAdjustableAccessor))},
	{"setSequencedEventAccessor", "(Lsun/awt/AWTAccessor$SequencedEventAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$SequencedEventAccessor*)>(&AWTAccessor::setSequencedEventAccessor))},
	{"setSystemColorAccessor", "(Lsun/awt/AWTAccessor$SystemColorAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$SystemColorAccessor*)>(&AWTAccessor::setSystemColorAccessor))},
	{"setSystemTrayAccessor", "(Lsun/awt/AWTAccessor$SystemTrayAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$SystemTrayAccessor*)>(&AWTAccessor::setSystemTrayAccessor))},
	{"setToolkitAccessor", "(Lsun/awt/AWTAccessor$ToolkitAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$ToolkitAccessor*)>(&AWTAccessor::setToolkitAccessor))},
	{"setTrayIconAccessor", "(Lsun/awt/AWTAccessor$TrayIconAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$TrayIconAccessor*)>(&AWTAccessor::setTrayIconAccessor))},
	{"setWindowAccessor", "(Lsun/awt/AWTAccessor$WindowAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AWTAccessor$WindowAccessor*)>(&AWTAccessor::setWindowAccessor))},
	{}
};

$InnerClassInfo _AWTAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$DropTargetContextAccessor", "sun.awt.AWTAccessor", "DropTargetContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$DragSourceContextAccessor", "sun.awt.AWTAccessor", "DragSourceContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$AccessibleBundleAccessor", "sun.awt.AWTAccessor", "AccessibleBundleAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$AccessibleContextAccessor", "sun.awt.AWTAccessor", "AccessibleContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$SystemColorAccessor", "sun.awt.AWTAccessor", "SystemColorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$InvocationEventAccessor", "sun.awt.AWTAccessor", "InvocationEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$ToolkitAccessor", "sun.awt.AWTAccessor", "ToolkitAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$SequencedEventAccessor", "sun.awt.AWTAccessor", "SequencedEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "DefaultKeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$TrayIconAccessor", "sun.awt.AWTAccessor", "TrayIconAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$SystemTrayAccessor", "sun.awt.AWTAccessor", "SystemTrayAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$ClientPropertyKeyAccessor", "sun.awt.AWTAccessor", "ClientPropertyKeyAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$KeyEventAccessor", "sun.awt.AWTAccessor", "KeyEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$MenuAccessor", "sun.awt.AWTAccessor", "MenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$MenuItemAccessor", "sun.awt.AWTAccessor", "MenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$MenuBarAccessor", "sun.awt.AWTAccessor", "MenuBarAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$CursorAccessor", "sun.awt.AWTAccessor", "CursorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$CheckboxMenuItemAccessor", "sun.awt.AWTAccessor", "CheckboxMenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor", "sun.awt.AWTAccessor", "ScrollPaneAdjustableAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$FileDialogAccessor", "sun.awt.AWTAccessor", "FileDialogAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$PopupMenuAccessor", "sun.awt.AWTAccessor", "PopupMenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$EventQueueAccessor", "sun.awt.AWTAccessor", "EventQueueAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$MenuComponentAccessor", "sun.awt.AWTAccessor", "MenuComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "KeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$FrameAccessor", "sun.awt.AWTAccessor", "FrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$MouseEventAccessor", "sun.awt.AWTAccessor", "MouseEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$InputEventAccessor", "sun.awt.AWTAccessor", "InputEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$AWTEventAccessor", "sun.awt.AWTAccessor", "AWTEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$WindowAccessor", "sun.awt.AWTAccessor", "WindowAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$ContainerAccessor", "sun.awt.AWTAccessor", "ContainerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.AWTAccessor$ComponentAccessor", "sun.awt.AWTAccessor", "ComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.AWTAccessor",
	"java.lang.Object",
	nullptr,
	_AWTAccessor_FieldInfo_,
	_AWTAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor$DropTargetContextAccessor,sun.awt.AWTAccessor$DragSourceContextAccessor,sun.awt.AWTAccessor$AccessibleBundleAccessor,sun.awt.AWTAccessor$AccessibleContextAccessor,sun.awt.AWTAccessor$SystemColorAccessor,sun.awt.AWTAccessor$InvocationEventAccessor,sun.awt.AWTAccessor$ToolkitAccessor,sun.awt.AWTAccessor$SequencedEventAccessor,sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor,sun.awt.AWTAccessor$TrayIconAccessor,sun.awt.AWTAccessor$SystemTrayAccessor,sun.awt.AWTAccessor$ClientPropertyKeyAccessor,sun.awt.AWTAccessor$KeyEventAccessor,sun.awt.AWTAccessor$MenuAccessor,sun.awt.AWTAccessor$MenuItemAccessor,sun.awt.AWTAccessor$MenuBarAccessor,sun.awt.AWTAccessor$CursorAccessor,sun.awt.AWTAccessor$CheckboxMenuItemAccessor,sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor,sun.awt.AWTAccessor$FileDialogAccessor,sun.awt.AWTAccessor$PopupMenuAccessor,sun.awt.AWTAccessor$EventQueueAccessor,sun.awt.AWTAccessor$MenuComponentAccessor,sun.awt.AWTAccessor$KeyboardFocusManagerAccessor,sun.awt.AWTAccessor$FrameAccessor,sun.awt.AWTAccessor$MouseEventAccessor,sun.awt.AWTAccessor$InputEventAccessor,sun.awt.AWTAccessor$AWTEventAccessor,sun.awt.AWTAccessor$WindowAccessor,sun.awt.AWTAccessor$ContainerAccessor,sun.awt.AWTAccessor$ComponentAccessor"
};

$Object* allocate$AWTAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor));
}

$AWTAccessor$ComponentAccessor* AWTAccessor::componentAccessor = nullptr;
$AWTAccessor$ContainerAccessor* AWTAccessor::containerAccessor = nullptr;
$AWTAccessor$WindowAccessor* AWTAccessor::windowAccessor = nullptr;
$AWTAccessor$AWTEventAccessor* AWTAccessor::awtEventAccessor = nullptr;
$AWTAccessor$InputEventAccessor* AWTAccessor::inputEventAccessor = nullptr;
$AWTAccessor$MouseEventAccessor* AWTAccessor::mouseEventAccessor = nullptr;
$AWTAccessor$FrameAccessor* AWTAccessor::frameAccessor = nullptr;
$AWTAccessor$KeyboardFocusManagerAccessor* AWTAccessor::kfmAccessor = nullptr;
$AWTAccessor$MenuComponentAccessor* AWTAccessor::menuComponentAccessor = nullptr;
$AWTAccessor$EventQueueAccessor* AWTAccessor::eventQueueAccessor = nullptr;
$AWTAccessor$PopupMenuAccessor* AWTAccessor::popupMenuAccessor = nullptr;
$AWTAccessor$FileDialogAccessor* AWTAccessor::fileDialogAccessor = nullptr;
$AWTAccessor$ScrollPaneAdjustableAccessor* AWTAccessor::scrollPaneAdjustableAccessor = nullptr;
$AWTAccessor$CheckboxMenuItemAccessor* AWTAccessor::checkboxMenuItemAccessor = nullptr;
$AWTAccessor$CursorAccessor* AWTAccessor::cursorAccessor = nullptr;
$AWTAccessor$MenuBarAccessor* AWTAccessor::menuBarAccessor = nullptr;
$AWTAccessor$MenuItemAccessor* AWTAccessor::menuItemAccessor = nullptr;
$AWTAccessor$MenuAccessor* AWTAccessor::menuAccessor = nullptr;
$AWTAccessor$KeyEventAccessor* AWTAccessor::keyEventAccessor = nullptr;
$AWTAccessor$ClientPropertyKeyAccessor* AWTAccessor::clientPropertyKeyAccessor = nullptr;
$AWTAccessor$SystemTrayAccessor* AWTAccessor::systemTrayAccessor = nullptr;
$AWTAccessor$TrayIconAccessor* AWTAccessor::trayIconAccessor = nullptr;
$AWTAccessor$DefaultKeyboardFocusManagerAccessor* AWTAccessor::defaultKeyboardFocusManagerAccessor = nullptr;
$AWTAccessor$SequencedEventAccessor* AWTAccessor::sequencedEventAccessor = nullptr;
$AWTAccessor$ToolkitAccessor* AWTAccessor::toolkitAccessor = nullptr;
$AWTAccessor$InvocationEventAccessor* AWTAccessor::invocationEventAccessor = nullptr;
$AWTAccessor$SystemColorAccessor* AWTAccessor::systemColorAccessor = nullptr;
$AWTAccessor$AccessibleContextAccessor* AWTAccessor::accessibleContextAccessor = nullptr;
$AWTAccessor$AccessibleBundleAccessor* AWTAccessor::accessibleBundleAccessor = nullptr;
$AWTAccessor$DragSourceContextAccessor* AWTAccessor::dragSourceContextAccessor = nullptr;
$AWTAccessor$DropTargetContextAccessor* AWTAccessor::dropTargetContextAccessor = nullptr;

void AWTAccessor::init$() {
}

void AWTAccessor::setComponentAccessor($AWTAccessor$ComponentAccessor* ca) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::componentAccessor, ca);
}

$AWTAccessor$ComponentAccessor* AWTAccessor::getComponentAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::componentAccessor == nullptr) {
		$load($Component);
		ensureClassInitialized($Component::class$);
	}
	return AWTAccessor::componentAccessor;
}

void AWTAccessor::setContainerAccessor($AWTAccessor$ContainerAccessor* ca) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::containerAccessor, ca);
}

$AWTAccessor$ContainerAccessor* AWTAccessor::getContainerAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::containerAccessor == nullptr) {
		$load($Container);
		ensureClassInitialized($Container::class$);
	}
	return AWTAccessor::containerAccessor;
}

void AWTAccessor::setWindowAccessor($AWTAccessor$WindowAccessor* wa) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::windowAccessor, wa);
}

$AWTAccessor$WindowAccessor* AWTAccessor::getWindowAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::windowAccessor == nullptr) {
		$load($Window);
		ensureClassInitialized($Window::class$);
	}
	return AWTAccessor::windowAccessor;
}

void AWTAccessor::setAWTEventAccessor($AWTAccessor$AWTEventAccessor* aea) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::awtEventAccessor, aea);
}

$AWTAccessor$AWTEventAccessor* AWTAccessor::getAWTEventAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::awtEventAccessor == nullptr) {
		$load($AWTEvent);
		ensureClassInitialized($AWTEvent::class$);
	}
	return AWTAccessor::awtEventAccessor;
}

void AWTAccessor::setInputEventAccessor($AWTAccessor$InputEventAccessor* iea) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::inputEventAccessor, iea);
}

$AWTAccessor$InputEventAccessor* AWTAccessor::getInputEventAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::inputEventAccessor == nullptr) {
		$load($InputEvent);
		ensureClassInitialized($InputEvent::class$);
	}
	return AWTAccessor::inputEventAccessor;
}

void AWTAccessor::setMouseEventAccessor($AWTAccessor$MouseEventAccessor* mea) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::mouseEventAccessor, mea);
}

$AWTAccessor$MouseEventAccessor* AWTAccessor::getMouseEventAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::mouseEventAccessor == nullptr) {
		$load($MouseEvent);
		ensureClassInitialized($MouseEvent::class$);
	}
	return AWTAccessor::mouseEventAccessor;
}

void AWTAccessor::setFrameAccessor($AWTAccessor$FrameAccessor* fa) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::frameAccessor, fa);
}

$AWTAccessor$FrameAccessor* AWTAccessor::getFrameAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::frameAccessor == nullptr) {
		$load($Frame);
		ensureClassInitialized($Frame::class$);
	}
	return AWTAccessor::frameAccessor;
}

void AWTAccessor::setKeyboardFocusManagerAccessor($AWTAccessor$KeyboardFocusManagerAccessor* kfma) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::kfmAccessor, kfma);
}

$AWTAccessor$KeyboardFocusManagerAccessor* AWTAccessor::getKeyboardFocusManagerAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::kfmAccessor == nullptr) {
		$load($KeyboardFocusManager);
		ensureClassInitialized($KeyboardFocusManager::class$);
	}
	return AWTAccessor::kfmAccessor;
}

void AWTAccessor::setMenuComponentAccessor($AWTAccessor$MenuComponentAccessor* mca) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::menuComponentAccessor, mca);
}

$AWTAccessor$MenuComponentAccessor* AWTAccessor::getMenuComponentAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::menuComponentAccessor == nullptr) {
		$load($MenuComponent);
		ensureClassInitialized($MenuComponent::class$);
	}
	return AWTAccessor::menuComponentAccessor;
}

void AWTAccessor::setEventQueueAccessor($AWTAccessor$EventQueueAccessor* eqa) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::eventQueueAccessor, eqa);
}

$AWTAccessor$EventQueueAccessor* AWTAccessor::getEventQueueAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::eventQueueAccessor == nullptr) {
		$load($EventQueue);
		ensureClassInitialized($EventQueue::class$);
	}
	return AWTAccessor::eventQueueAccessor;
}

void AWTAccessor::setPopupMenuAccessor($AWTAccessor$PopupMenuAccessor* pma) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::popupMenuAccessor, pma);
}

$AWTAccessor$PopupMenuAccessor* AWTAccessor::getPopupMenuAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::popupMenuAccessor == nullptr) {
		$load($PopupMenu);
		ensureClassInitialized($PopupMenu::class$);
	}
	return AWTAccessor::popupMenuAccessor;
}

void AWTAccessor::setFileDialogAccessor($AWTAccessor$FileDialogAccessor* fda) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::fileDialogAccessor, fda);
}

$AWTAccessor$FileDialogAccessor* AWTAccessor::getFileDialogAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::fileDialogAccessor == nullptr) {
		$load($FileDialog);
		ensureClassInitialized($FileDialog::class$);
	}
	return AWTAccessor::fileDialogAccessor;
}

void AWTAccessor::setScrollPaneAdjustableAccessor($AWTAccessor$ScrollPaneAdjustableAccessor* adj) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::scrollPaneAdjustableAccessor, adj);
}

$AWTAccessor$ScrollPaneAdjustableAccessor* AWTAccessor::getScrollPaneAdjustableAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::scrollPaneAdjustableAccessor == nullptr) {
		$load($ScrollPaneAdjustable);
		ensureClassInitialized($ScrollPaneAdjustable::class$);
	}
	return AWTAccessor::scrollPaneAdjustableAccessor;
}

void AWTAccessor::setCheckboxMenuItemAccessor($AWTAccessor$CheckboxMenuItemAccessor* cmia) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::checkboxMenuItemAccessor, cmia);
}

$AWTAccessor$CheckboxMenuItemAccessor* AWTAccessor::getCheckboxMenuItemAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::checkboxMenuItemAccessor == nullptr) {
		$load($AWTAccessor$CheckboxMenuItemAccessor);
		ensureClassInitialized($AWTAccessor$CheckboxMenuItemAccessor::class$);
	}
	return AWTAccessor::checkboxMenuItemAccessor;
}

void AWTAccessor::setCursorAccessor($AWTAccessor$CursorAccessor* ca) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::cursorAccessor, ca);
}

$AWTAccessor$CursorAccessor* AWTAccessor::getCursorAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::cursorAccessor == nullptr) {
		$load($AWTAccessor$CursorAccessor);
		ensureClassInitialized($AWTAccessor$CursorAccessor::class$);
	}
	return AWTAccessor::cursorAccessor;
}

void AWTAccessor::setMenuBarAccessor($AWTAccessor$MenuBarAccessor* mba) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::menuBarAccessor, mba);
}

$AWTAccessor$MenuBarAccessor* AWTAccessor::getMenuBarAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::menuBarAccessor == nullptr) {
		$load($AWTAccessor$MenuBarAccessor);
		ensureClassInitialized($AWTAccessor$MenuBarAccessor::class$);
	}
	return AWTAccessor::menuBarAccessor;
}

void AWTAccessor::setMenuItemAccessor($AWTAccessor$MenuItemAccessor* mia) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::menuItemAccessor, mia);
}

$AWTAccessor$MenuItemAccessor* AWTAccessor::getMenuItemAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::menuItemAccessor == nullptr) {
		$load($AWTAccessor$MenuItemAccessor);
		ensureClassInitialized($AWTAccessor$MenuItemAccessor::class$);
	}
	return AWTAccessor::menuItemAccessor;
}

void AWTAccessor::setMenuAccessor($AWTAccessor$MenuAccessor* ma) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::menuAccessor, ma);
}

$AWTAccessor$MenuAccessor* AWTAccessor::getMenuAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::menuAccessor == nullptr) {
		$load($AWTAccessor$MenuAccessor);
		ensureClassInitialized($AWTAccessor$MenuAccessor::class$);
	}
	return AWTAccessor::menuAccessor;
}

void AWTAccessor::setKeyEventAccessor($AWTAccessor$KeyEventAccessor* kea) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::keyEventAccessor, kea);
}

$AWTAccessor$KeyEventAccessor* AWTAccessor::getKeyEventAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::keyEventAccessor == nullptr) {
		$load($AWTAccessor$KeyEventAccessor);
		ensureClassInitialized($AWTAccessor$KeyEventAccessor::class$);
	}
	return AWTAccessor::keyEventAccessor;
}

void AWTAccessor::setClientPropertyKeyAccessor($AWTAccessor$ClientPropertyKeyAccessor* cpka) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::clientPropertyKeyAccessor, cpka);
}

$AWTAccessor$ClientPropertyKeyAccessor* AWTAccessor::getClientPropertyKeyAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::clientPropertyKeyAccessor == nullptr) {
		$load($AWTAccessor$ClientPropertyKeyAccessor);
		ensureClassInitialized($AWTAccessor$ClientPropertyKeyAccessor::class$);
	}
	return AWTAccessor::clientPropertyKeyAccessor;
}

void AWTAccessor::setSystemTrayAccessor($AWTAccessor$SystemTrayAccessor* sta) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::systemTrayAccessor, sta);
}

$AWTAccessor$SystemTrayAccessor* AWTAccessor::getSystemTrayAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::systemTrayAccessor == nullptr) {
		$load($AWTAccessor$SystemTrayAccessor);
		ensureClassInitialized($AWTAccessor$SystemTrayAccessor::class$);
	}
	return AWTAccessor::systemTrayAccessor;
}

void AWTAccessor::setTrayIconAccessor($AWTAccessor$TrayIconAccessor* tia) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::trayIconAccessor, tia);
}

$AWTAccessor$TrayIconAccessor* AWTAccessor::getTrayIconAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::trayIconAccessor == nullptr) {
		$load($AWTAccessor$TrayIconAccessor);
		ensureClassInitialized($AWTAccessor$TrayIconAccessor::class$);
	}
	return AWTAccessor::trayIconAccessor;
}

void AWTAccessor::setDefaultKeyboardFocusManagerAccessor($AWTAccessor$DefaultKeyboardFocusManagerAccessor* dkfma) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::defaultKeyboardFocusManagerAccessor, dkfma);
}

$AWTAccessor$DefaultKeyboardFocusManagerAccessor* AWTAccessor::getDefaultKeyboardFocusManagerAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::defaultKeyboardFocusManagerAccessor == nullptr) {
		$load($AWTAccessor$DefaultKeyboardFocusManagerAccessor);
		ensureClassInitialized($AWTAccessor$DefaultKeyboardFocusManagerAccessor::class$);
	}
	return AWTAccessor::defaultKeyboardFocusManagerAccessor;
}

void AWTAccessor::setSequencedEventAccessor($AWTAccessor$SequencedEventAccessor* sea) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::sequencedEventAccessor, sea);
}

$AWTAccessor$SequencedEventAccessor* AWTAccessor::getSequencedEventAccessor() {
	$load(AWTAccessor);
	$beforeCallerSensitive();
	$init(AWTAccessor);
	if (AWTAccessor::sequencedEventAccessor == nullptr) {
		try {
			ensureClassInitialized($Class::forName("java.awt.SequencedEvent"_s));
		} catch ($ClassNotFoundException& ignore) {
		}
	}
	return AWTAccessor::sequencedEventAccessor;
}

void AWTAccessor::setToolkitAccessor($AWTAccessor$ToolkitAccessor* ta) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::toolkitAccessor, ta);
}

$AWTAccessor$ToolkitAccessor* AWTAccessor::getToolkitAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::toolkitAccessor == nullptr) {
		$load($Toolkit);
		ensureClassInitialized($Toolkit::class$);
	}
	return AWTAccessor::toolkitAccessor;
}

void AWTAccessor::setInvocationEventAccessor($AWTAccessor$InvocationEventAccessor* invocationEventAccessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::invocationEventAccessor, invocationEventAccessor);
}

$AWTAccessor$InvocationEventAccessor* AWTAccessor::getInvocationEventAccessor() {
	$init(AWTAccessor);
	return AWTAccessor::invocationEventAccessor;
}

$AWTAccessor$SystemColorAccessor* AWTAccessor::getSystemColorAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::systemColorAccessor == nullptr) {
		$load($SystemColor);
		ensureClassInitialized($SystemColor::class$);
	}
	return AWTAccessor::systemColorAccessor;
}

void AWTAccessor::setSystemColorAccessor($AWTAccessor$SystemColorAccessor* systemColorAccessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::systemColorAccessor, systemColorAccessor);
}

$AWTAccessor$AccessibleContextAccessor* AWTAccessor::getAccessibleContextAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::accessibleContextAccessor == nullptr) {
		$load($AccessibleContext);
		ensureClassInitialized($AccessibleContext::class$);
	}
	return AWTAccessor::accessibleContextAccessor;
}

void AWTAccessor::setAccessibleBundleAccessor($AWTAccessor$AccessibleBundleAccessor* accessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::accessibleBundleAccessor, accessor);
}

$AWTAccessor$AccessibleBundleAccessor* AWTAccessor::getAccessibleBundleAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::accessibleBundleAccessor == nullptr) {
		$load($AccessibleBundle);
		ensureClassInitialized($AccessibleBundle::class$);
	}
	return AWTAccessor::accessibleBundleAccessor;
}

void AWTAccessor::setAccessibleContextAccessor($AWTAccessor$AccessibleContextAccessor* accessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::accessibleContextAccessor, accessor);
}

$AWTAccessor$DragSourceContextAccessor* AWTAccessor::getDragSourceContextAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::dragSourceContextAccessor == nullptr) {
		$load($DragSourceContext);
		ensureClassInitialized($DragSourceContext::class$);
	}
	return AWTAccessor::dragSourceContextAccessor;
}

void AWTAccessor::setDragSourceContextAccessor($AWTAccessor$DragSourceContextAccessor* accessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::dragSourceContextAccessor, accessor);
}

$AWTAccessor$DropTargetContextAccessor* AWTAccessor::getDropTargetContextAccessor() {
	$init(AWTAccessor);
	if (AWTAccessor::dropTargetContextAccessor == nullptr) {
		$load($DropTargetContext);
		ensureClassInitialized($DropTargetContext::class$);
	}
	return AWTAccessor::dropTargetContextAccessor;
}

void AWTAccessor::setDropTargetContextAccessor($AWTAccessor$DropTargetContextAccessor* accessor) {
	$init(AWTAccessor);
	$assignStatic(AWTAccessor::dropTargetContextAccessor, accessor);
}

void AWTAccessor::ensureClassInitialized($Class* c) {
	$load(AWTAccessor);
	$beforeCallerSensitive();
	try {
		$nc($($MethodHandles::lookup()))->ensureInitialized(c);
	} catch ($IllegalAccessException& e) {
	}
}

AWTAccessor::AWTAccessor() {
}

$Class* AWTAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor, name, initialize, &_AWTAccessor_ClassInfo_, allocate$AWTAccessor);
	return class$;
}

$Class* AWTAccessor::class$ = nullptr;

	} // awt
} // sun