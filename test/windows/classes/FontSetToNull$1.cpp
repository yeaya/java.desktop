#include <FontSetToNull$1.h>

#include <FontSetToNull.h>
#include <java/awt/Font.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

using $FontSetToNull = ::FontSetToNull;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner = ::javax::swing::JSpinner;

$MethodInfo _FontSetToNull$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontSetToNull$1::*)()>(&FontSetToNull$1::init$))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontSetToNull$1_EnclosingMethodInfo_ = {
	"FontSetToNull",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _FontSetToNull$1_InnerClassesInfo_[] = {
	{"FontSetToNull$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontSetToNull$1_ClassInfo_ = {
	$ACC_SUPER,
	"FontSetToNull$1",
	"javax.swing.JSpinner",
	nullptr,
	nullptr,
	_FontSetToNull$1_MethodInfo_,
	nullptr,
	&_FontSetToNull$1_EnclosingMethodInfo_,
	_FontSetToNull$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FontSetToNull"
};

$Object* allocate$FontSetToNull$1($Class* clazz) {
	return $of($alloc(FontSetToNull$1));
}

void FontSetToNull$1::init$() {
	$JSpinner::init$();
}

$Font* FontSetToNull$1::getFont() {
	return nullptr;
}

FontSetToNull$1::FontSetToNull$1() {
}

$Class* FontSetToNull$1::load$($String* name, bool initialize) {
	$loadClass(FontSetToNull$1, name, initialize, &_FontSetToNull$1_ClassInfo_, allocate$FontSetToNull$1);
	return class$;
}

$Class* FontSetToNull$1::class$ = nullptr;