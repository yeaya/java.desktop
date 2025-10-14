#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPDLUValue.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$XPDLUValue_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$XPDLUValue, this$0)},
	{"direction", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel$XPDLUValue, direction)},
	{}
};

$MethodInfo _WindowsLookAndFeel$XPDLUValue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;III)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPDLUValue::*)($WindowsLookAndFeel*,int32_t,int32_t,int32_t)>(&WindowsLookAndFeel$XPDLUValue::init$))},
	{"getClassicValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getXPValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$XPDLUValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPDLUValue", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$XPDLUValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue",
	nullptr,
	_WindowsLookAndFeel$XPDLUValue_FieldInfo_,
	_WindowsLookAndFeel$XPDLUValue_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPDLUValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$XPDLUValue($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$XPDLUValue));
}

void WindowsLookAndFeel$XPDLUValue::init$($WindowsLookAndFeel* this$0, int32_t xpdlu, int32_t classicdlu, int32_t direction) {
	$set(this, this$0, this$0);
	$var($Object, var$0, $of($Integer::valueOf(xpdlu)));
	$WindowsLookAndFeel$XPValue::init$(var$0, $($Integer::valueOf(classicdlu)));
	this->direction = direction;
}

$Object* WindowsLookAndFeel$XPDLUValue::getXPValue($UIDefaults* table) {
	int32_t px = this->this$0->dluToPixels($nc(($cast($Integer, this->xpValue)))->intValue(), this->direction);
	return $of($Integer::valueOf(px));
}

$Object* WindowsLookAndFeel$XPDLUValue::getClassicValue($UIDefaults* table) {
	int32_t px = this->this$0->dluToPixels($nc(($cast($Integer, this->classicValue)))->intValue(), this->direction);
	return $of($Integer::valueOf(px));
}

WindowsLookAndFeel$XPDLUValue::WindowsLookAndFeel$XPDLUValue() {
}

$Class* WindowsLookAndFeel$XPDLUValue::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$XPDLUValue, name, initialize, &_WindowsLookAndFeel$XPDLUValue_ClassInfo_, allocate$WindowsLookAndFeel$XPDLUValue);
	return class$;
}

$Class* WindowsLookAndFeel$XPDLUValue::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com