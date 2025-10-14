#include <javax/swing/UIDefaults$ActiveValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

$MethodInfo _UIDefaults$ActiveValue_MethodInfo_[] = {
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _UIDefaults$ActiveValue_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UIDefaults$ActiveValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.UIDefaults$ActiveValue",
	nullptr,
	nullptr,
	nullptr,
	_UIDefaults$ActiveValue_MethodInfo_,
	nullptr,
	nullptr,
	_UIDefaults$ActiveValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$ActiveValue($Class* clazz) {
	return $of($alloc(UIDefaults$ActiveValue));
}

$Class* UIDefaults$ActiveValue::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$ActiveValue, name, initialize, &_UIDefaults$ActiveValue_ClassInfo_, allocate$UIDefaults$ActiveValue);
	return class$;
}

$Class* UIDefaults$ActiveValue::class$ = nullptr;

	} // swing
} // javax