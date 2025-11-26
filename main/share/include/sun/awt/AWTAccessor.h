#ifndef _sun_awt_AWTAccessor_h_
#define _sun_awt_AWTAccessor_h_
//$ class sun.awt.AWTAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		class AWTAccessor$AWTEventAccessor;
		class AWTAccessor$AccessibleBundleAccessor;
		class AWTAccessor$AccessibleContextAccessor;
		class AWTAccessor$CheckboxMenuItemAccessor;
		class AWTAccessor$ClientPropertyKeyAccessor;
		class AWTAccessor$ComponentAccessor;
		class AWTAccessor$ContainerAccessor;
		class AWTAccessor$CursorAccessor;
		class AWTAccessor$DefaultKeyboardFocusManagerAccessor;
		class AWTAccessor$DragSourceContextAccessor;
		class AWTAccessor$DropTargetContextAccessor;
		class AWTAccessor$EventQueueAccessor;
		class AWTAccessor$FileDialogAccessor;
		class AWTAccessor$FrameAccessor;
		class AWTAccessor$InputEventAccessor;
		class AWTAccessor$InvocationEventAccessor;
		class AWTAccessor$KeyEventAccessor;
		class AWTAccessor$KeyboardFocusManagerAccessor;
		class AWTAccessor$MenuAccessor;
		class AWTAccessor$MenuBarAccessor;
		class AWTAccessor$MenuComponentAccessor;
		class AWTAccessor$MenuItemAccessor;
		class AWTAccessor$MouseEventAccessor;
		class AWTAccessor$PopupMenuAccessor;
		class AWTAccessor$ScrollPaneAdjustableAccessor;
		class AWTAccessor$SequencedEventAccessor;
		class AWTAccessor$SystemColorAccessor;
		class AWTAccessor$SystemTrayAccessor;
		class AWTAccessor$ToolkitAccessor;
		class AWTAccessor$TrayIconAccessor;
		class AWTAccessor$WindowAccessor;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor : public ::java::lang::Object {
	$class(AWTAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AWTAccessor();
	void init$();
	static void ensureClassInitialized($Class* c);
	static ::sun::awt::AWTAccessor$AWTEventAccessor* getAWTEventAccessor();
	static ::sun::awt::AWTAccessor$AccessibleBundleAccessor* getAccessibleBundleAccessor();
	static ::sun::awt::AWTAccessor$AccessibleContextAccessor* getAccessibleContextAccessor();
	static ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor* getCheckboxMenuItemAccessor();
	static ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor* getClientPropertyKeyAccessor();
	static ::sun::awt::AWTAccessor$ComponentAccessor* getComponentAccessor();
	static ::sun::awt::AWTAccessor$ContainerAccessor* getContainerAccessor();
	static ::sun::awt::AWTAccessor$CursorAccessor* getCursorAccessor();
	static ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor* getDefaultKeyboardFocusManagerAccessor();
	static ::sun::awt::AWTAccessor$DragSourceContextAccessor* getDragSourceContextAccessor();
	static ::sun::awt::AWTAccessor$DropTargetContextAccessor* getDropTargetContextAccessor();
	static ::sun::awt::AWTAccessor$EventQueueAccessor* getEventQueueAccessor();
	static ::sun::awt::AWTAccessor$FileDialogAccessor* getFileDialogAccessor();
	static ::sun::awt::AWTAccessor$FrameAccessor* getFrameAccessor();
	static ::sun::awt::AWTAccessor$InputEventAccessor* getInputEventAccessor();
	static ::sun::awt::AWTAccessor$InvocationEventAccessor* getInvocationEventAccessor();
	static ::sun::awt::AWTAccessor$KeyEventAccessor* getKeyEventAccessor();
	static ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor* getKeyboardFocusManagerAccessor();
	static ::sun::awt::AWTAccessor$MenuAccessor* getMenuAccessor();
	static ::sun::awt::AWTAccessor$MenuBarAccessor* getMenuBarAccessor();
	static ::sun::awt::AWTAccessor$MenuComponentAccessor* getMenuComponentAccessor();
	static ::sun::awt::AWTAccessor$MenuItemAccessor* getMenuItemAccessor();
	static ::sun::awt::AWTAccessor$MouseEventAccessor* getMouseEventAccessor();
	static ::sun::awt::AWTAccessor$PopupMenuAccessor* getPopupMenuAccessor();
	static ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor* getScrollPaneAdjustableAccessor();
	static ::sun::awt::AWTAccessor$SequencedEventAccessor* getSequencedEventAccessor();
	static ::sun::awt::AWTAccessor$SystemColorAccessor* getSystemColorAccessor();
	static ::sun::awt::AWTAccessor$SystemTrayAccessor* getSystemTrayAccessor();
	static ::sun::awt::AWTAccessor$ToolkitAccessor* getToolkitAccessor();
	static ::sun::awt::AWTAccessor$TrayIconAccessor* getTrayIconAccessor();
	static ::sun::awt::AWTAccessor$WindowAccessor* getWindowAccessor();
	static void setAWTEventAccessor(::sun::awt::AWTAccessor$AWTEventAccessor* aea);
	static void setAccessibleBundleAccessor(::sun::awt::AWTAccessor$AccessibleBundleAccessor* accessor);
	static void setAccessibleContextAccessor(::sun::awt::AWTAccessor$AccessibleContextAccessor* accessor);
	static void setCheckboxMenuItemAccessor(::sun::awt::AWTAccessor$CheckboxMenuItemAccessor* cmia);
	static void setClientPropertyKeyAccessor(::sun::awt::AWTAccessor$ClientPropertyKeyAccessor* cpka);
	static void setComponentAccessor(::sun::awt::AWTAccessor$ComponentAccessor* ca);
	static void setContainerAccessor(::sun::awt::AWTAccessor$ContainerAccessor* ca);
	static void setCursorAccessor(::sun::awt::AWTAccessor$CursorAccessor* ca);
	static void setDefaultKeyboardFocusManagerAccessor(::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor* dkfma);
	static void setDragSourceContextAccessor(::sun::awt::AWTAccessor$DragSourceContextAccessor* accessor);
	static void setDropTargetContextAccessor(::sun::awt::AWTAccessor$DropTargetContextAccessor* accessor);
	static void setEventQueueAccessor(::sun::awt::AWTAccessor$EventQueueAccessor* eqa);
	static void setFileDialogAccessor(::sun::awt::AWTAccessor$FileDialogAccessor* fda);
	static void setFrameAccessor(::sun::awt::AWTAccessor$FrameAccessor* fa);
	static void setInputEventAccessor(::sun::awt::AWTAccessor$InputEventAccessor* iea);
	static void setInvocationEventAccessor(::sun::awt::AWTAccessor$InvocationEventAccessor* invocationEventAccessor);
	static void setKeyEventAccessor(::sun::awt::AWTAccessor$KeyEventAccessor* kea);
	static void setKeyboardFocusManagerAccessor(::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor* kfma);
	static void setMenuAccessor(::sun::awt::AWTAccessor$MenuAccessor* ma);
	static void setMenuBarAccessor(::sun::awt::AWTAccessor$MenuBarAccessor* mba);
	static void setMenuComponentAccessor(::sun::awt::AWTAccessor$MenuComponentAccessor* mca);
	static void setMenuItemAccessor(::sun::awt::AWTAccessor$MenuItemAccessor* mia);
	static void setMouseEventAccessor(::sun::awt::AWTAccessor$MouseEventAccessor* mea);
	static void setPopupMenuAccessor(::sun::awt::AWTAccessor$PopupMenuAccessor* pma);
	static void setScrollPaneAdjustableAccessor(::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor* adj);
	static void setSequencedEventAccessor(::sun::awt::AWTAccessor$SequencedEventAccessor* sea);
	static void setSystemColorAccessor(::sun::awt::AWTAccessor$SystemColorAccessor* systemColorAccessor);
	static void setSystemTrayAccessor(::sun::awt::AWTAccessor$SystemTrayAccessor* sta);
	static void setToolkitAccessor(::sun::awt::AWTAccessor$ToolkitAccessor* ta);
	static void setTrayIconAccessor(::sun::awt::AWTAccessor$TrayIconAccessor* tia);
	static void setWindowAccessor(::sun::awt::AWTAccessor$WindowAccessor* wa);
	static ::sun::awt::AWTAccessor$ComponentAccessor* componentAccessor;
	static ::sun::awt::AWTAccessor$ContainerAccessor* containerAccessor;
	static ::sun::awt::AWTAccessor$WindowAccessor* windowAccessor;
	static ::sun::awt::AWTAccessor$AWTEventAccessor* awtEventAccessor;
	static ::sun::awt::AWTAccessor$InputEventAccessor* inputEventAccessor;
	static ::sun::awt::AWTAccessor$MouseEventAccessor* mouseEventAccessor;
	static ::sun::awt::AWTAccessor$FrameAccessor* frameAccessor;
	static ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor* kfmAccessor;
	static ::sun::awt::AWTAccessor$MenuComponentAccessor* menuComponentAccessor;
	static ::sun::awt::AWTAccessor$EventQueueAccessor* eventQueueAccessor;
	static ::sun::awt::AWTAccessor$PopupMenuAccessor* popupMenuAccessor;
	static ::sun::awt::AWTAccessor$FileDialogAccessor* fileDialogAccessor;
	static ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor* scrollPaneAdjustableAccessor;
	static ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor* checkboxMenuItemAccessor;
	static ::sun::awt::AWTAccessor$CursorAccessor* cursorAccessor;
	static ::sun::awt::AWTAccessor$MenuBarAccessor* menuBarAccessor;
	static ::sun::awt::AWTAccessor$MenuItemAccessor* menuItemAccessor;
	static ::sun::awt::AWTAccessor$MenuAccessor* menuAccessor;
	static ::sun::awt::AWTAccessor$KeyEventAccessor* keyEventAccessor;
	static ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor* clientPropertyKeyAccessor;
	static ::sun::awt::AWTAccessor$SystemTrayAccessor* systemTrayAccessor;
	static ::sun::awt::AWTAccessor$TrayIconAccessor* trayIconAccessor;
	static ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor* defaultKeyboardFocusManagerAccessor;
	static ::sun::awt::AWTAccessor$SequencedEventAccessor* sequencedEventAccessor;
	static ::sun::awt::AWTAccessor$ToolkitAccessor* toolkitAccessor;
	static ::sun::awt::AWTAccessor$InvocationEventAccessor* invocationEventAccessor;
	static ::sun::awt::AWTAccessor$SystemColorAccessor* systemColorAccessor;
	static ::sun::awt::AWTAccessor$AccessibleContextAccessor* accessibleContextAccessor;
	static ::sun::awt::AWTAccessor$AccessibleBundleAccessor* accessibleBundleAccessor;
	static ::sun::awt::AWTAccessor$DragSourceContextAccessor* dragSourceContextAccessor;
	static ::sun::awt::AWTAccessor$DropTargetContextAccessor* dropTargetContextAccessor;
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor_h_