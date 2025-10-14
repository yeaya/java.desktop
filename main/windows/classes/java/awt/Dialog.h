#ifndef _java_awt_Dialog_h_
#define _java_awt_Dialog_h_
//$ class java.awt.Dialog
//$ extends java.awt.Window

#include <java/awt/Window.h>

#pragma push_macro("DEFAULT_MODALITY_TYPE")
#undef DEFAULT_MODALITY_TYPE

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dialog$ModalityType;
		class Frame;
		class GraphicsConfiguration;
		class ModalEventFilter;
		class SecondaryLoop;
		class Shape;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace sun {
	namespace awt {
		namespace util {
			class IdentityArrayList;
		}
	}
}

namespace java {
	namespace awt {

class $export Dialog : public ::java::awt::Window {
	$class(Dialog, 0, ::java::awt::Window)
public:
	Dialog();
	using ::java::awt::Window::isFocusCycleRoot;
	using ::java::awt::Window::add;
	using ::java::awt::Window::getMousePosition;
	using ::java::awt::Window::list;
	void init$(::java::awt::Frame* owner);
	void init$(::java::awt::Frame* owner, bool modal);
	void init$(::java::awt::Frame* owner, $String* title);
	void init$(::java::awt::Frame* owner, $String* title, bool modal);
	void init$(::java::awt::Frame* owner, $String* title, bool modal, ::java::awt::GraphicsConfiguration* gc);
	void init$(::java::awt::Dialog* owner);
	void init$(::java::awt::Dialog* owner, $String* title);
	void init$(::java::awt::Dialog* owner, $String* title, bool modal);
	void init$(::java::awt::Dialog* owner, $String* title, bool modal, ::java::awt::GraphicsConfiguration* gc);
	void init$(::java::awt::Window* owner);
	void init$(::java::awt::Window* owner, $String* title);
	void init$(::java::awt::Window* owner, ::java::awt::Dialog$ModalityType* modalityType);
	void init$(::java::awt::Window* owner, $String* title, ::java::awt::Dialog$ModalityType* modalityType);
	void init$(::java::awt::Window* owner, $String* title, ::java::awt::Dialog$ModalityType* modalityType, ::java::awt::GraphicsConfiguration* gc);
	virtual void addNotify() override;
	virtual void blockWindow(::java::awt::Window* w);
	virtual void blockWindows(::java::util::List* toBlock);
	void checkModalityPermission(::java::awt::Dialog$ModalityType* mt);
	static void checkShouldBeBlocked(::java::awt::Window* w);
	bool conditionalShow(::java::awt::Component* toFocus, ::java::util::concurrent::atomic::AtomicLong* time);
	virtual $String* constructComponentName() override;
	virtual void doDispose() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Dialog$ModalityType* getModalityType();
	virtual $String* getTitle();
	virtual void hide() override;
	void hideAndDisposeHandler();
	void hideAndDisposePreHandler();
	static void initIDs();
	virtual bool isModal();
	bool isModal_NoClientCode();
	virtual bool isResizable();
	virtual bool isUndecorated();
	static void lambda$show$0();
	static bool lambda$show$1();
	virtual void modalHide();
	virtual void modalShow();
	void modalityPopped();
	void modalityPushed();
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Window::remove;
	virtual void setBackground(::java::awt::Color* bgColor) override;
	virtual void setModal(bool modal);
	virtual void setModalityType(::java::awt::Dialog$ModalityType* type);
	virtual void setOpacity(float opacity) override;
	virtual void setResizable(bool resizable);
	virtual void setShape(::java::awt::Shape* shape) override;
	virtual void setTitle($String* title);
	virtual void setUndecorated(bool undecorated);
	virtual void setVisible(bool b) override;
	virtual bool shouldBlock(::java::awt::Window* w);
	using ::java::awt::Window::show;
	virtual void show() override;
	virtual void toBack() override;
	virtual void unblockWindow(::java::awt::Window* w);
	bool resizable = false;
	bool undecorated = false;
	bool initialized = false;
	static ::java::awt::Dialog$ModalityType* DEFAULT_MODALITY_TYPE;
	bool modal = false;
	::java::awt::Dialog$ModalityType* modalityType = nullptr;
	static ::sun::awt::util::IdentityArrayList* modalDialogs;
	::sun::awt::util::IdentityArrayList* blockedWindows = nullptr;
	$String* title = nullptr;
	::java::awt::ModalEventFilter* modalFilter = nullptr;
	$volatile(::java::awt::SecondaryLoop*) secondaryLoop = nullptr;
	$volatile(bool) isInHide = false;
	$volatile(bool) isInDispose = false;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x522B5BA60A3FB00D;
};

	} // awt
} // java

#pragma pop_macro("DEFAULT_MODALITY_TYPE")

#endif // _java_awt_Dialog_h_