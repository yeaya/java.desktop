#include <TestObjectView$UserElement$1.h>

#include <TestObjectView$UserElement.h>
#include <TestObjectView$UserJComponent.h>
#include <TestObjectView.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef CLASSID

using $TestObjectView$UserElement = ::TestObjectView$UserElement;
using $TestObjectView$UserJComponent = ::TestObjectView$UserJComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

$FieldInfo _TestObjectView$UserElement$1_FieldInfo_[] = {
	{"this$0", "LTestObjectView$UserElement;", nullptr, $FINAL | $SYNTHETIC, $field(TestObjectView$UserElement$1, this$0)},
	{}
};

$MethodInfo _TestObjectView$UserElement$1_MethodInfo_[] = {
	{"<init>", "(LTestObjectView$UserElement;)V", nullptr, 0, $method(static_cast<void(TestObjectView$UserElement$1::*)($TestObjectView$UserElement*)>(&TestObjectView$UserElement$1::init$))},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestObjectView$UserElement$1_EnclosingMethodInfo_ = {
	"TestObjectView$UserElement",
	"getAttributes",
	"()Ljavax/swing/text/AttributeSet;"
};

$InnerClassInfo _TestObjectView$UserElement$1_InnerClassesInfo_[] = {
	{"TestObjectView$UserElement", "TestObjectView", "UserElement", $PUBLIC | $STATIC},
	{"TestObjectView$UserElement$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestObjectView$UserElement$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestObjectView$UserElement$1",
	"java.lang.Object",
	"javax.swing.text.AttributeSet",
	_TestObjectView$UserElement$1_FieldInfo_,
	_TestObjectView$UserElement$1_MethodInfo_,
	nullptr,
	&_TestObjectView$UserElement$1_EnclosingMethodInfo_,
	_TestObjectView$UserElement$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectView"
};

$Object* allocate$TestObjectView$UserElement$1($Class* clazz) {
	return $of($alloc(TestObjectView$UserElement$1));
}

void TestObjectView$UserElement$1::init$($TestObjectView$UserElement* this$0) {
	$set(this, this$0, this$0);
}

int32_t TestObjectView$UserElement$1::getAttributeCount() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::isDefined(Object$* attrName) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::isEqual($AttributeSet* attr) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$AttributeSet* TestObjectView$UserElement$1::copyAttributes() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* TestObjectView$UserElement$1::getAttribute(Object$* key) {
	$init($HTML$Attribute);
	if ($nc($of(key))->equals($HTML$Attribute::CLASSID)) {
		$load($TestObjectView$UserJComponent);
		return $of($TestObjectView$UserJComponent::class$->getName());
	}
	return $of(nullptr);
}

$Enumeration* TestObjectView$UserElement$1::getAttributeNames() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::containsAttribute(Object$* name, Object$* value) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::containsAttributes($AttributeSet* attributes) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$AttributeSet* TestObjectView$UserElement$1::getResolveParent() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

TestObjectView$UserElement$1::TestObjectView$UserElement$1() {
}

$Class* TestObjectView$UserElement$1::load$($String* name, bool initialize) {
	$loadClass(TestObjectView$UserElement$1, name, initialize, &_TestObjectView$UserElement$1_ClassInfo_, allocate$TestObjectView$UserElement$1);
	return class$;
}

$Class* TestObjectView$UserElement$1::class$ = nullptr;