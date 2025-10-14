#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler.h>

#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef FRAME_ICON_PROPERTY

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::*)($WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "WindowsPropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
	nullptr,
	_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_FieldInfo_,
	_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
};

$Object* allocate$WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler));
}

void WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::init$($WindowsInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$0);
}

void WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JInternalFrame);
	if ($nc($JInternalFrame::FRAME_ICON_PROPERTY)->equals(prop) && this->this$0->systemLabel != nullptr) {
		$nc(this->this$0->systemLabel)->setIcon($($nc($($WindowsInternalFrameTitlePane::access$1200(this->this$0)))->getFrameIcon()));
	}
	$BasicInternalFrameTitlePane$PropertyChangeHandler::propertyChange(evt);
}

WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler() {
}

$Class* WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, name, initialize, &_WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler_ClassInfo_, allocate$WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler);
	return class$;
}

$Class* WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com