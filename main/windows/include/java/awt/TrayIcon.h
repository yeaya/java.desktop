#ifndef _java_awt_TrayIcon_h_
#define _java_awt_TrayIcon_h_
//$ class java.awt.TrayIcon
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Dimension;
		class Image;
		class PopupMenu;
		class TrayIcon$MessageType;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
			class MouseEvent;
			class MouseListener;
			class MouseMotionListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class TrayIconPeer;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace awt {

class $import TrayIcon : public ::java::lang::Object {
	$class(TrayIcon, 0, ::java::lang::Object)
public:
	TrayIcon();
	void init$();
	void init$(::java::awt::Image* image);
	void init$(::java::awt::Image* image, $String* tooltip);
	void init$(::java::awt::Image* image, $String* tooltip, ::java::awt::PopupMenu* popup);
	virtual void addActionListener(::java::awt::event::ActionListener* listener);
	virtual void addMouseListener(::java::awt::event::MouseListener* listener);
	virtual void addMouseMotionListener(::java::awt::event::MouseMotionListener* listener);
	virtual void addNotify();
	virtual void dispatchEvent(::java::awt::AWTEvent* e);
	virtual void displayMessage($String* caption, $String* text, ::java::awt::TrayIcon$MessageType* messageType);
	::java::security::AccessControlContext* getAccessControlContext();
	virtual $String* getActionCommand();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual int32_t getID();
	virtual ::java::awt::Image* getImage();
	virtual $Array<::java::awt::event::MouseListener>* getMouseListeners();
	virtual $Array<::java::awt::event::MouseMotionListener>* getMouseMotionListeners();
	virtual ::java::awt::PopupMenu* getPopupMenu();
	virtual ::java::awt::Dimension* getSize();
	virtual $String* getToolTip();
	static void initIDs();
	virtual bool isImageAutoSize();
	virtual void processActionEvent(::java::awt::event::ActionEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e);
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e);
	virtual void processMouseMotionEvent(::java::awt::event::MouseEvent* e);
	virtual void removeActionListener(::java::awt::event::ActionListener* listener);
	virtual void removeMouseListener(::java::awt::event::MouseListener* listener);
	virtual void removeMouseMotionListener(::java::awt::event::MouseMotionListener* listener);
	virtual void removeNotify();
	virtual void setActionCommand($String* command);
	virtual void setID(int32_t id);
	virtual void setImage(::java::awt::Image* image);
	virtual void setImageAutoSize(bool autosize);
	virtual void setPopupMenu(::java::awt::PopupMenu* popup);
	virtual void setToolTip($String* tooltip);
	::java::awt::Image* image = nullptr;
	$String* tooltip = nullptr;
	::java::awt::PopupMenu* popup = nullptr;
	bool autosize = false;
	int32_t id = 0;
	$String* actionCommand = nullptr;
	::java::awt::peer::TrayIconPeer* peer = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
	::java::awt::event::MouseMotionListener* mouseMotionListener = nullptr;
	::java::awt::event::ActionListener* actionListener = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

	} // awt
} // java

#endif // _java_awt_TrayIcon_h_