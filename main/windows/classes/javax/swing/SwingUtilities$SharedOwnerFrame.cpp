#include <javax/swing/SwingUtilities$SharedOwnerFrame.h>

#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$MethodInfo _SwingUtilities$SharedOwnerFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwingUtilities$SharedOwnerFrame::*)()>(&SwingUtilities$SharedOwnerFrame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"installListeners", "()V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwingUtilities$SharedOwnerFrame_InnerClassesInfo_[] = {
	{"javax.swing.SwingUtilities$SharedOwnerFrame", "javax.swing.SwingUtilities", "SharedOwnerFrame", $STATIC},
	{}
};

$ClassInfo _SwingUtilities$SharedOwnerFrame_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingUtilities$SharedOwnerFrame",
	"java.awt.Frame",
	"java.awt.event.WindowListener",
	nullptr,
	_SwingUtilities$SharedOwnerFrame_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities$SharedOwnerFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingUtilities"
};

$Object* allocate$SwingUtilities$SharedOwnerFrame($Class* clazz) {
	return $of($alloc(SwingUtilities$SharedOwnerFrame));
}

$String* SwingUtilities$SharedOwnerFrame::toString() {
	 return this->$Frame::toString();
}

int32_t SwingUtilities$SharedOwnerFrame::hashCode() {
	 return this->$Frame::hashCode();
}

bool SwingUtilities$SharedOwnerFrame::equals(Object$* arg0) {
	 return this->$Frame::equals(arg0);
}

$Object* SwingUtilities$SharedOwnerFrame::clone() {
	 return this->$Frame::clone();
}

void SwingUtilities$SharedOwnerFrame::finalize() {
	this->$Frame::finalize();
}

void SwingUtilities$SharedOwnerFrame::init$() {
	$Frame::init$();
}

void SwingUtilities$SharedOwnerFrame::addNotify() {
	$Frame::addNotify();
	installListeners();
}

void SwingUtilities$SharedOwnerFrame::installListeners() {
	$useLocalCurrentObjectStackCache();
	$var($WindowArray, windows, getOwnedWindows());
	{
		$var($WindowArray, arr$, windows);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, window, arr$->get(i$));
			{
				if (window != nullptr) {
					window->removeWindowListener(this);
					window->addWindowListener(this);
				}
			}
		}
	}
}

void SwingUtilities$SharedOwnerFrame::windowClosed($WindowEvent* e) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($WindowArray, windows, getOwnedWindows());
		{
			$var($WindowArray, arr$, windows);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Window, window, arr$->get(i$));
				{
					if (window != nullptr) {
						if (window->isDisplayable()) {
							return;
						}
						window->removeWindowListener(this);
					}
				}
			}
		}
		dispose();
	}
}

void SwingUtilities$SharedOwnerFrame::windowOpened($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::windowClosing($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::windowIconified($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::windowDeiconified($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::windowActivated($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::windowDeactivated($WindowEvent* e) {
}

void SwingUtilities$SharedOwnerFrame::show() {
}

void SwingUtilities$SharedOwnerFrame::dispose() {
	try {
		$nc($(getToolkit()))->getSystemEventQueue();
		$Frame::dispose();
	} catch ($Exception&) {
		$catch();
	}
}

SwingUtilities$SharedOwnerFrame::SwingUtilities$SharedOwnerFrame() {
}

$Class* SwingUtilities$SharedOwnerFrame::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities$SharedOwnerFrame, name, initialize, &_SwingUtilities$SharedOwnerFrame_ClassInfo_, allocate$SwingUtilities$SharedOwnerFrame);
	return class$;
}

$Class* SwingUtilities$SharedOwnerFrame::class$ = nullptr;

	} // swing
} // javax