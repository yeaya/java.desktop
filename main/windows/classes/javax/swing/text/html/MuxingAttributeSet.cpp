#include <javax/swing/text/html/MuxingAttributeSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/MuxingAttributeSet$MuxingAttributeNameEnumeration.h>
#include <jcpp.h>

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $MuxingAttributeSet$MuxingAttributeNameEnumeration = ::javax::swing::text::html::MuxingAttributeSet$MuxingAttributeNameEnumeration;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _MuxingAttributeSet_FieldInfo_[] = {
	{"attrs", "[Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(MuxingAttributeSet, attrs)},
	{}
};

$MethodInfo _MuxingAttributeSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(MuxingAttributeSet::*)($AttributeSetArray*)>(&MuxingAttributeSet::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MuxingAttributeSet::*)()>(&MuxingAttributeSet::init$))},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getAttributes", "()[Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"insertAttributeSetAt", "(Ljavax/swing/text/AttributeSet;I)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"removeAttributeSetAt", "(I)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"setAttributes", "([Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MuxingAttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.html.MuxingAttributeSet$MuxingAttributeNameEnumeration", "javax.swing.text.html.MuxingAttributeSet", "MuxingAttributeNameEnumeration", $PRIVATE},
	{}
};

$ClassInfo _MuxingAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.MuxingAttributeSet",
	"java.lang.Object",
	"javax.swing.text.AttributeSet,java.io.Serializable",
	_MuxingAttributeSet_FieldInfo_,
	_MuxingAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_MuxingAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.MuxingAttributeSet$MuxingAttributeNameEnumeration"
};

$Object* allocate$MuxingAttributeSet($Class* clazz) {
	return $of($alloc(MuxingAttributeSet));
}

int32_t MuxingAttributeSet::hashCode() {
	 return this->$AttributeSet::hashCode();
}

bool MuxingAttributeSet::equals(Object$* arg0) {
	 return this->$AttributeSet::equals(arg0);
}

$Object* MuxingAttributeSet::clone() {
	 return this->$AttributeSet::clone();
}

$String* MuxingAttributeSet::toString() {
	 return this->$AttributeSet::toString();
}

void MuxingAttributeSet::finalize() {
	this->$AttributeSet::finalize();
}

void MuxingAttributeSet::init$($AttributeSetArray* attrs) {
	$set(this, attrs, attrs);
}

void MuxingAttributeSet::init$() {
}

void MuxingAttributeSet::setAttributes($AttributeSetArray* attrs) {
	$synchronized(this) {
		$set(this, attrs, attrs);
	}
}

$AttributeSetArray* MuxingAttributeSet::getAttributes() {
	$synchronized(this) {
		return this->attrs;
	}
}

void MuxingAttributeSet::insertAttributeSetAt($AttributeSet* as, int32_t index) {
	$synchronized(this) {
		int32_t numAttrs = $nc(this->attrs)->length;
		$var($AttributeSetArray, newAttrs, $new($AttributeSetArray, numAttrs + 1));
		if (index < numAttrs) {
			if (index > 0) {
				$System::arraycopy(this->attrs, 0, newAttrs, 0, index);
				$System::arraycopy(this->attrs, index, newAttrs, index + 1, numAttrs - index);
			} else {
				$System::arraycopy(this->attrs, 0, newAttrs, 1, numAttrs);
			}
		} else {
			$System::arraycopy(this->attrs, 0, newAttrs, 0, numAttrs);
		}
		newAttrs->set(index, as);
		$set(this, attrs, newAttrs);
	}
}

void MuxingAttributeSet::removeAttributeSetAt(int32_t index) {
	$synchronized(this) {
		int32_t numAttrs = $nc(this->attrs)->length;
		$var($AttributeSetArray, newAttrs, $new($AttributeSetArray, numAttrs - 1));
		if (numAttrs > 0) {
			if (index == 0) {
				$System::arraycopy(this->attrs, 1, newAttrs, 0, numAttrs - 1);
			} else if (index < (numAttrs - 1)) {
				$System::arraycopy(this->attrs, 0, newAttrs, 0, index);
				$System::arraycopy(this->attrs, index + 1, newAttrs, index, numAttrs - index - 1);
			} else {
				$System::arraycopy(this->attrs, 0, newAttrs, 0, numAttrs - 1);
			}
		}
		$set(this, attrs, newAttrs);
	}
}

int32_t MuxingAttributeSet::getAttributeCount() {
	$var($AttributeSetArray, as, getAttributes());
	int32_t n = 0;
	for (int32_t i = 0; i < $nc(as)->length; ++i) {
		n += $nc(as->get(i))->getAttributeCount();
	}
	return n;
}

bool MuxingAttributeSet::isDefined(Object$* key) {
	$var($AttributeSetArray, as, getAttributes());
	for (int32_t i = 0; i < $nc(as)->length; ++i) {
		if ($nc(as->get(i))->isDefined(key)) {
			return true;
		}
	}
	return false;
}

bool MuxingAttributeSet::isEqual($AttributeSet* attr) {
	int32_t var$1 = getAttributeCount();
	bool var$0 = (var$1 == $nc(attr)->getAttributeCount());
	return (var$0 && containsAttributes(attr));
}

$AttributeSet* MuxingAttributeSet::copyAttributes() {
	$var($AttributeSetArray, as, getAttributes());
	$var($MutableAttributeSet, a, $new($SimpleAttributeSet));
	int32_t n = 0;
	for (int32_t i = $nc(as)->length - 1; i >= 0; --i) {
		a->addAttributes(as->get(i));
	}
	return a;
}

$Object* MuxingAttributeSet::getAttribute(Object$* key) {
	$var($AttributeSetArray, as, getAttributes());
	int32_t n = $nc(as)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, o, $nc(as->get(i))->getAttribute(key));
		if (o != nullptr) {
			return $of(o);
		}
	}
	return $of(nullptr);
}

$Enumeration* MuxingAttributeSet::getAttributeNames() {
	return $new($MuxingAttributeSet$MuxingAttributeNameEnumeration, this);
}

bool MuxingAttributeSet::containsAttribute(Object$* name, Object$* value) {
	return $nc($of(value))->equals($(getAttribute(name)));
}

bool MuxingAttributeSet::containsAttributes($AttributeSet* attrs) {
	bool result = true;
	$var($Enumeration, names, $nc(attrs)->getAttributeNames());
	while (result && $nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		result = $nc($of($(attrs->getAttribute(name))))->equals($(getAttribute(name)));
	}
	return result;
}

$AttributeSet* MuxingAttributeSet::getResolveParent() {
	return nullptr;
}

MuxingAttributeSet::MuxingAttributeSet() {
}

$Class* MuxingAttributeSet::load$($String* name, bool initialize) {
	$loadClass(MuxingAttributeSet, name, initialize, &_MuxingAttributeSet_ClassInfo_, allocate$MuxingAttributeSet);
	return class$;
}

$Class* MuxingAttributeSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax