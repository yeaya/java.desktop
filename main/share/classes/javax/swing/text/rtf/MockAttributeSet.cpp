#include <javax/swing/text/rtf/MockAttributeSet.h>

#include <java/lang/InternalError.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _MockAttributeSet_FieldInfo_[] = {
	{"backing", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC, $field(MockAttributeSet, backing)},
	{}
};

$MethodInfo _MockAttributeSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MockAttributeSet::*)()>(&MockAttributeSet::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MockAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.MockAttributeSet",
	"java.lang.Object",
	"javax.swing.text.MutableAttributeSet",
	_MockAttributeSet_FieldInfo_,
	_MockAttributeSet_MethodInfo_
};

$Object* allocate$MockAttributeSet($Class* clazz) {
	return $of($alloc(MockAttributeSet));
}

void MockAttributeSet::init$() {
}

bool MockAttributeSet::isEmpty() {
	return $nc(this->backing)->isEmpty();
}

int32_t MockAttributeSet::getAttributeCount() {
	return $nc(this->backing)->size();
}

bool MockAttributeSet::isDefined(Object$* name) {
	return ($nc(this->backing)->get(name)) != nullptr;
}

bool MockAttributeSet::isEqual($AttributeSet* attr) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
	$shouldNotReachHere();
}

$AttributeSet* MockAttributeSet::copyAttributes() {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
	$shouldNotReachHere();
}

$Object* MockAttributeSet::getAttribute(Object$* name) {
	return $of($nc(this->backing)->get(name));
}

void MockAttributeSet::addAttribute(Object$* name, Object$* value) {
	$nc(this->backing)->put(name, value);
}

void MockAttributeSet::addAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, as, $nc(attr)->getAttributeNames());
	while ($nc(as)->hasMoreElements()) {
		$var($Object, el, as->nextElement());
		$nc(this->backing)->put(el, $(attr->getAttribute(el)));
	}
}

void MockAttributeSet::removeAttribute(Object$* name) {
	$nc(this->backing)->remove(name);
}

void MockAttributeSet::removeAttributes($AttributeSet* attr) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
}

void MockAttributeSet::removeAttributes($Enumeration* en) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
}

void MockAttributeSet::setResolveParent($AttributeSet* pp) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
}

$Enumeration* MockAttributeSet::getAttributeNames() {
	return $nc(this->backing)->keys();
}

bool MockAttributeSet::containsAttribute(Object$* name, Object$* value) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
	$shouldNotReachHere();
}

bool MockAttributeSet::containsAttributes($AttributeSet* attr) {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
	$shouldNotReachHere();
}

$AttributeSet* MockAttributeSet::getResolveParent() {
	$throwNew($InternalError, "MockAttributeSet: charade revealed!"_s);
	$shouldNotReachHere();
}

MockAttributeSet::MockAttributeSet() {
}

$Class* MockAttributeSet::load$($String* name, bool initialize) {
	$loadClass(MockAttributeSet, name, initialize, &_MockAttributeSet_ClassInfo_, allocate$MockAttributeSet);
	return class$;
}

$Class* MockAttributeSet::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax