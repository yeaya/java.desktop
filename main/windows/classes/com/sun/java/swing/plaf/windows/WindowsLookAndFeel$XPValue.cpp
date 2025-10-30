#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef NULL_VALUE

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$XPValue_FieldInfo_[] = {
	{"classicValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(WindowsLookAndFeel$XPValue, classicValue)},
	{"xpValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(WindowsLookAndFeel$XPValue, xpValue)},
	{"NULL_VALUE", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsLookAndFeel$XPValue, NULL_VALUE)},
	{}
};

$MethodInfo _WindowsLookAndFeel$XPValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPValue::*)(Object$*,Object$*)>(&WindowsLookAndFeel$XPValue::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getClassicValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getXPValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"recursiveCreateValue", "(Ljava/lang/Object;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(WindowsLookAndFeel$XPValue::*)(Object$*,$UIDefaults*)>(&WindowsLookAndFeel$XPValue::recursiveCreateValue))},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$XPValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsLookAndFeel$XPValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_WindowsLookAndFeel$XPValue_FieldInfo_,
	_WindowsLookAndFeel$XPValue_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$XPValue($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$XPValue));
}

$Object* WindowsLookAndFeel$XPValue::NULL_VALUE = nullptr;

void WindowsLookAndFeel$XPValue::init$(Object$* xpValue, Object$* classicValue) {
	$set(this, xpValue, xpValue);
	$set(this, classicValue, classicValue);
}

$Object* WindowsLookAndFeel$XPValue::createValue($UIDefaults* table) {
	$var($Object, value, nullptr);
	if ($XPStyle::getXP() != nullptr) {
		$assign(value, getXPValue(table));
	}
	if (value == nullptr) {
		$assign(value, getClassicValue(table));
	} else if ($equals(value, WindowsLookAndFeel$XPValue::NULL_VALUE)) {
		$assign(value, nullptr);
	}
	return $of(value);
}

$Object* WindowsLookAndFeel$XPValue::getXPValue($UIDefaults* table) {
	return $of(recursiveCreateValue(this->xpValue, table));
}

$Object* WindowsLookAndFeel$XPValue::getClassicValue($UIDefaults* table) {
	return $of(recursiveCreateValue(this->classicValue, table));
}

$Object* WindowsLookAndFeel$XPValue::recursiveCreateValue(Object$* value$renamed, $UIDefaults* table) {
	$var($Object, value, value$renamed);
	if ($instanceOf($UIDefaults$LazyValue, value)) {
		$assign(value, $nc(($cast($UIDefaults$LazyValue, value)))->createValue(table));
	}
	if ($instanceOf($UIDefaults$ActiveValue, value)) {
		return $of($nc(($cast($UIDefaults$ActiveValue, value)))->createValue(table));
	} else {
		return $of(value);
	}
}

void clinit$WindowsLookAndFeel$XPValue($Class* class$) {
	$assignStatic(WindowsLookAndFeel$XPValue::NULL_VALUE, $new($Object));
}

WindowsLookAndFeel$XPValue::WindowsLookAndFeel$XPValue() {
}

$Class* WindowsLookAndFeel$XPValue::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$XPValue, name, initialize, &_WindowsLookAndFeel$XPValue_ClassInfo_, clinit$WindowsLookAndFeel$XPValue, allocate$WindowsLookAndFeel$XPValue);
	return class$;
}

$Class* WindowsLookAndFeel$XPValue::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com