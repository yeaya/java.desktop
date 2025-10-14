#include <javax/swing/text/PlainView$FPMethodItem.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlainView = ::javax::swing::text::PlainView;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _PlainView$FPMethodItem_FieldInfo_[] = {
	{"className", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(PlainView$FPMethodItem, className)},
	{"methodName", "Ljava/lang/String;", nullptr, $FINAL, $field(PlainView$FPMethodItem, methodName)},
	{}
};

$MethodInfo _PlainView$FPMethodItem_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(PlainView$FPMethodItem::*)($Class*,$String*)>(&PlainView$FPMethodItem::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PlainView$FPMethodItem_InnerClassesInfo_[] = {
	{"javax.swing.text.PlainView$FPMethodItem", "javax.swing.text.PlainView", "FPMethodItem", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PlainView$FPMethodItem_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.PlainView$FPMethodItem",
	"java.lang.Object",
	nullptr,
	_PlainView$FPMethodItem_FieldInfo_,
	_PlainView$FPMethodItem_MethodInfo_,
	nullptr,
	nullptr,
	_PlainView$FPMethodItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.PlainView"
};

$Object* allocate$PlainView$FPMethodItem($Class* clazz) {
	return $of($alloc(PlainView$FPMethodItem));
}

void PlainView$FPMethodItem::init$($Class* className, $String* methodName) {
	$set(this, className, className);
	$set(this, methodName, methodName);
}

bool PlainView$FPMethodItem::equals(Object$* obj) {
	if ($instanceOf(PlainView$FPMethodItem, obj)) {
		$var(PlainView$FPMethodItem, that, $cast(PlainView$FPMethodItem, obj));
		bool var$0 = $nc($of(this->className))->equals($nc(that)->className);
		return var$0 && $nc(this->methodName)->equals($nc(that)->methodName);
	}
	return false;
}

int32_t PlainView$FPMethodItem::hashCode() {
	int32_t var$0 = 31 * $nc(this->methodName)->hashCode();
	return var$0 + $nc($of(this->className))->hashCode();
}

PlainView$FPMethodItem::PlainView$FPMethodItem() {
}

$Class* PlainView$FPMethodItem::load$($String* name, bool initialize) {
	$loadClass(PlainView$FPMethodItem, name, initialize, &_PlainView$FPMethodItem_ClassInfo_, allocate$PlainView$FPMethodItem);
	return class$;
}

$Class* PlainView$FPMethodItem::class$ = nullptr;

		} // text
	} // swing
} // javax