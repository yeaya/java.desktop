#include <javax/swing/text/StyleContext$SmallAttributeSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$KeyEnumeration.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyleContext$KeyEnumeration = ::javax::swing::text::StyleContext$KeyEnumeration;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext$SmallAttributeSet_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyleContext;", nullptr, $FINAL | $SYNTHETIC, $field(StyleContext$SmallAttributeSet, this$0)},
	{"attributes", "[Ljava/lang/Object;", nullptr, 0, $field(StyleContext$SmallAttributeSet, attributes)},
	{"resolveParent", "Ljavax/swing/text/AttributeSet;", nullptr, 0, $field(StyleContext$SmallAttributeSet, resolveParent)},
	{}
};

$MethodInfo _StyleContext$SmallAttributeSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StyleContext;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$SmallAttributeSet::*)($StyleContext*,$ObjectArray*)>(&StyleContext$SmallAttributeSet::init$))},
	{"<init>", "(Ljavax/swing/text/StyleContext;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$SmallAttributeSet::*)($StyleContext*,$AttributeSet*)>(&StyleContext$SmallAttributeSet::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getLocalAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateResolveParent", "()V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext$SmallAttributeSet::*)()>(&StyleContext$SmallAttributeSet::updateResolveParent))},
	{}
};

$InnerClassInfo _StyleContext$SmallAttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleContext$SmallAttributeSet", "javax.swing.text.StyleContext", "SmallAttributeSet", $PUBLIC},
	{}
};

$ClassInfo _StyleContext$SmallAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleContext$SmallAttributeSet",
	"java.lang.Object",
	"javax.swing.text.AttributeSet",
	_StyleContext$SmallAttributeSet_FieldInfo_,
	_StyleContext$SmallAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_StyleContext$SmallAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext"
};

$Object* allocate$StyleContext$SmallAttributeSet($Class* clazz) {
	return $of($alloc(StyleContext$SmallAttributeSet));
}

void StyleContext$SmallAttributeSet::init$($StyleContext* this$0, $ObjectArray* attributes) {
	$set(this, this$0, this$0);
	$set(this, attributes, $Arrays::copyOf(attributes, $nc(attributes)->length));
	updateResolveParent();
}

void StyleContext$SmallAttributeSet::init$($StyleContext* this$0, $AttributeSet* attrs) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	int32_t n = $nc(attrs)->getAttributeCount();
	$var($ObjectArray, tbl, $new($ObjectArray, 2 * n));
	$var($Enumeration, names, attrs->getAttributeNames());
	int32_t i = 0;
	while ($nc(names)->hasMoreElements()) {
		tbl->set(i, $(names->nextElement()));
		tbl->set(i + 1, $(attrs->getAttribute(tbl->get(i))));
		i += 2;
	}
	$set(this, attributes, tbl);
	updateResolveParent();
}

void StyleContext$SmallAttributeSet::updateResolveParent() {
	$set(this, resolveParent, nullptr);
	$var($ObjectArray, tbl, this->attributes);
	for (int32_t i = 0; i < $nc(tbl)->length; i += 2) {
		$init($StyleConstants);
		if ($equals(tbl->get(i), $StyleConstants::ResolveAttribute)) {
			$set(this, resolveParent, $cast($AttributeSet, tbl->get(i + 1)));
			break;
		}
	}
}

$Object* StyleContext$SmallAttributeSet::getLocalAttribute(Object$* nm) {
	$init($StyleConstants);
	if ($equals(nm, $StyleConstants::ResolveAttribute)) {
		return $of(this->resolveParent);
	}
	$var($ObjectArray, tbl, this->attributes);
	for (int32_t i = 0; i < $nc(tbl)->length; i += 2) {
		if ($nc($of(nm))->equals(tbl->get(i))) {
			return $of(tbl->get(i + 1));
		}
	}
	return $of(nullptr);
}

$String* StyleContext$SmallAttributeSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, "{"_s);
	$var($ObjectArray, tbl, this->attributes);
	for (int32_t i = 0; i < $nc(tbl)->length; i += 2) {
		if ($instanceOf($AttributeSet, tbl->get(i + 1))) {
			$assign(s, $str({s, tbl->get(i), "=AttributeSet,"_s}));
		} else {
			$assign(s, $str({s, tbl->get(i), "="_s, tbl->get(i + 1), ","_s}));
		}
	}
	$assign(s, $str({s, "}"_s}));
	return s;
}

int32_t StyleContext$SmallAttributeSet::hashCode() {
	int32_t code = 0;
	$var($ObjectArray, tbl, this->attributes);
	for (int32_t i = 1; i < $nc(tbl)->length; i += 2) {
		code ^= $nc($of(tbl->get(i)))->hashCode();
	}
	return code;
}

bool StyleContext$SmallAttributeSet::equals(Object$* obj) {
	if ($instanceOf($AttributeSet, obj)) {
		$var($AttributeSet, attrs, $cast($AttributeSet, obj));
		int32_t var$1 = getAttributeCount();
		bool var$0 = (var$1 == $nc(attrs)->getAttributeCount());
		return (var$0 && containsAttributes(attrs));
	}
	return false;
}

$Object* StyleContext$SmallAttributeSet::clone() {
	return $of(this);
}

int32_t StyleContext$SmallAttributeSet::getAttributeCount() {
	return $nc(this->attributes)->length / 2;
}

bool StyleContext$SmallAttributeSet::isDefined(Object$* key) {
	$var($ObjectArray, a, this->attributes);
	int32_t n = $nc(a)->length;
	for (int32_t i = 0; i < n; i += 2) {
		if ($nc($of(key))->equals(a->get(i))) {
			return true;
		}
	}
	return false;
}

bool StyleContext$SmallAttributeSet::isEqual($AttributeSet* attr) {
	if ($instanceOf(StyleContext$SmallAttributeSet, attr)) {
		return $equals(attr, this);
	}
	int32_t var$1 = getAttributeCount();
	bool var$0 = (var$1 == $nc(attr)->getAttributeCount());
	return (var$0 && containsAttributes(attr));
}

$AttributeSet* StyleContext$SmallAttributeSet::copyAttributes() {
	return this;
}

$Object* StyleContext$SmallAttributeSet::getAttribute(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, getLocalAttribute(key));
	if (value == nullptr) {
		$var($AttributeSet, parent, getResolveParent());
		if (parent != nullptr) {
			$assign(value, parent->getAttribute(key));
		}
	}
	return $of(value);
}

$Enumeration* StyleContext$SmallAttributeSet::getAttributeNames() {
	return $new($StyleContext$KeyEnumeration, this->this$0, this->attributes);
}

bool StyleContext$SmallAttributeSet::containsAttribute(Object$* name, Object$* value) {
	return $nc($of(value))->equals($(getAttribute(name)));
}

bool StyleContext$SmallAttributeSet::containsAttributes($AttributeSet* attrs) {
	$useLocalCurrentObjectStackCache();
	bool result = true;
	$var($Enumeration, names, $nc(attrs)->getAttributeNames());
	while (result && $nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		result = $nc($of($(attrs->getAttribute(name))))->equals($(getAttribute(name)));
	}
	return result;
}

$AttributeSet* StyleContext$SmallAttributeSet::getResolveParent() {
	return this->resolveParent;
}

StyleContext$SmallAttributeSet::StyleContext$SmallAttributeSet() {
}

$Class* StyleContext$SmallAttributeSet::load$($String* name, bool initialize) {
	$loadClass(StyleContext$SmallAttributeSet, name, initialize, &_StyleContext$SmallAttributeSet_ClassInfo_, allocate$StyleContext$SmallAttributeSet);
	return class$;
}

$Class* StyleContext$SmallAttributeSet::class$ = nullptr;

		} // text
	} // swing
} // javax