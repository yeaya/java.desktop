#include <javax/swing/UIDefaults$LazyValue.h>

#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _UIDefaults$LazyValue_MethodInfo_[] = {
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _UIDefaults$LazyValue_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UIDefaults$LazyValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	nullptr,
	nullptr,
	_UIDefaults$LazyValue_MethodInfo_,
	nullptr,
	nullptr,
	_UIDefaults$LazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$LazyValue($Class* clazz) {
	return $of($alloc(UIDefaults$LazyValue));
}

$Class* UIDefaults$LazyValue::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$LazyValue, name, initialize, &_UIDefaults$LazyValue_ClassInfo_, allocate$UIDefaults$LazyValue);
	return class$;
}

$Class* UIDefaults$LazyValue::class$ = nullptr;

	} // swing
} // javax