#include <javax/swing/text/html/StyleSheet$ResolvedStyle.h>

#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/html/MuxingAttributeSet.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $MuxingAttributeSet = ::javax::swing::text::html::MuxingAttributeSet;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$ResolvedStyle_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(StyleSheet$ResolvedStyle, name)},
	{"extendedIndex", "I", nullptr, $PRIVATE, $field(StyleSheet$ResolvedStyle, extendedIndex)},
	{}
};

$MethodInfo _StyleSheet$ResolvedStyle_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"*copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getAttributeCount", "()I", nullptr, $PUBLIC},
	{"*getAttributeNames", "()Ljava/util/Enumeration;", nullptr, $PUBLIC},
	{"*getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;[Ljavax/swing/text/AttributeSet;I)V", nullptr, 0, $method(static_cast<void(StyleSheet$ResolvedStyle::*)($String*,$AttributeSetArray*,int32_t)>(&StyleSheet$ResolvedStyle::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addExtendedStyle", "(Ljavax/swing/text/Style;)V", nullptr, $SYNCHRONIZED},
	{"boundedIndexOf", "(Ljava/lang/String;CII)I", nullptr, 0},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"insertExtendedStyleAt", "(Ljavax/swing/text/Style;I)V", nullptr, $SYNCHRONIZED},
	{"insertStyle", "(Ljavax/swing/text/Style;I)V", nullptr, $SYNCHRONIZED},
	{"*isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{"matches", "(Ljava/lang/String;IIII)Z", nullptr, 0},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"removeExtendedStyleAt", "(I)V", nullptr, $SYNCHRONIZED},
	{"removeStyle", "(Ljavax/swing/text/Style;)V", nullptr, $SYNCHRONIZED},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$ResolvedStyle_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$ResolvedStyle", "javax.swing.text.html.StyleSheet", "ResolvedStyle", $STATIC},
	{}
};

$ClassInfo _StyleSheet$ResolvedStyle_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$ResolvedStyle",
	"javax.swing.text.html.MuxingAttributeSet",
	"javax.swing.text.Style",
	_StyleSheet$ResolvedStyle_FieldInfo_,
	_StyleSheet$ResolvedStyle_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$ResolvedStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$ResolvedStyle($Class* clazz) {
	return $of($alloc(StyleSheet$ResolvedStyle));
}

int32_t StyleSheet$ResolvedStyle::getAttributeCount() {
	 return this->$MuxingAttributeSet::getAttributeCount();
}

bool StyleSheet$ResolvedStyle::isDefined(Object$* key) {
	 return this->$MuxingAttributeSet::isDefined(key);
}

bool StyleSheet$ResolvedStyle::isEqual($AttributeSet* attr) {
	 return this->$MuxingAttributeSet::isEqual(attr);
}

$AttributeSet* StyleSheet$ResolvedStyle::copyAttributes() {
	 return this->$MuxingAttributeSet::copyAttributes();
}

$Object* StyleSheet$ResolvedStyle::getAttribute(Object$* key) {
	 return this->$MuxingAttributeSet::getAttribute(key);
}

$Enumeration* StyleSheet$ResolvedStyle::getAttributeNames() {
	 return this->$MuxingAttributeSet::getAttributeNames();
}

bool StyleSheet$ResolvedStyle::containsAttribute(Object$* name, Object$* value) {
	 return this->$MuxingAttributeSet::containsAttribute(name, value);
}

bool StyleSheet$ResolvedStyle::containsAttributes($AttributeSet* attrs) {
	 return this->$MuxingAttributeSet::containsAttributes(attrs);
}

$AttributeSet* StyleSheet$ResolvedStyle::getResolveParent() {
	 return this->$MuxingAttributeSet::getResolveParent();
}

int32_t StyleSheet$ResolvedStyle::hashCode() {
	 return this->$MuxingAttributeSet::hashCode();
}

bool StyleSheet$ResolvedStyle::equals(Object$* arg0) {
	 return this->$MuxingAttributeSet::equals(arg0);
}

$Object* StyleSheet$ResolvedStyle::clone() {
	 return this->$MuxingAttributeSet::clone();
}

$String* StyleSheet$ResolvedStyle::toString() {
	 return this->$MuxingAttributeSet::toString();
}

void StyleSheet$ResolvedStyle::finalize() {
	this->$MuxingAttributeSet::finalize();
}

void StyleSheet$ResolvedStyle::init$($String* name, $AttributeSetArray* attrs, int32_t extendedIndex) {
	$MuxingAttributeSet::init$(attrs);
	$set(this, name, name);
	this->extendedIndex = extendedIndex;
}

void StyleSheet$ResolvedStyle::insertStyle($Style* style, int32_t specificity) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AttributeSetArray, attrs, getAttributes());
		int32_t maxCounter = $nc(attrs)->length;
		int32_t counter = 0;
		for (; counter < this->extendedIndex; ++counter) {
			if (specificity > $StyleSheet::getSpecificity($($nc(($cast($Style, attrs->get(counter))))->getName()))) {
				break;
			}
		}
		insertAttributeSetAt(style, counter);
		++this->extendedIndex;
	}
}

void StyleSheet$ResolvedStyle::removeStyle($Style* style) {
	$synchronized(this) {
		$var($AttributeSetArray, attrs, getAttributes());
		for (int32_t counter = $nc(attrs)->length - 1; counter >= 0; --counter) {
			if ($equals(attrs->get(counter), style)) {
				removeAttributeSetAt(counter);
				if (counter < this->extendedIndex) {
					--this->extendedIndex;
				}
				break;
			}
		}
	}
}

void StyleSheet$ResolvedStyle::insertExtendedStyleAt($Style* attr, int32_t index) {
	$synchronized(this) {
		insertAttributeSetAt(attr, this->extendedIndex + index);
	}
}

void StyleSheet$ResolvedStyle::addExtendedStyle($Style* attr) {
	$synchronized(this) {
		insertAttributeSetAt(attr, $nc($(getAttributes()))->length);
	}
}

void StyleSheet$ResolvedStyle::removeExtendedStyleAt(int32_t index) {
	$synchronized(this) {
		removeAttributeSetAt(this->extendedIndex + index);
	}
}

bool StyleSheet$ResolvedStyle::matches($String* selector) {
	int32_t sLast = $nc(selector)->length();
	if (sLast == 0) {
		return false;
	}
	int32_t thisLast = $nc(this->name)->length();
	int32_t sCurrent = selector->lastIndexOf((int32_t)u' ');
	int32_t thisCurrent = $nc(this->name)->lastIndexOf((int32_t)u' ');
	if (sCurrent >= 0) {
		++sCurrent;
	}
	if (thisCurrent >= 0) {
		++thisCurrent;
	}
	if (!matches(selector, sCurrent, sLast, thisCurrent, thisLast)) {
		return false;
	}
	while (sCurrent != -1) {
		sLast = sCurrent - 1;
		sCurrent = selector->lastIndexOf((int32_t)u' ', sLast - 1);
		if (sCurrent >= 0) {
			++sCurrent;
		}
		bool match = false;
		while (!match && thisCurrent != -1) {
			thisLast = thisCurrent - 1;
			thisCurrent = $nc(this->name)->lastIndexOf((int32_t)u' ', thisLast - 1);
			if (thisCurrent >= 0) {
				++thisCurrent;
			}
			match = matches(selector, sCurrent, sLast, thisCurrent, thisLast);
		}
		if (!match) {
			return false;
		}
	}
	return true;
}

bool StyleSheet$ResolvedStyle::matches($String* selector, int32_t sCurrent, int32_t sLast, int32_t thisCurrent, int32_t thisLast) {
	sCurrent = $Math::max(sCurrent, 0);
	thisCurrent = $Math::max(thisCurrent, 0);
	int32_t thisDotIndex = boundedIndexOf(this->name, u'.', thisCurrent, thisLast);
	int32_t thisPoundIndex = boundedIndexOf(this->name, u'#', thisCurrent, thisLast);
	int32_t sDotIndex = boundedIndexOf(selector, u'.', sCurrent, sLast);
	int32_t sPoundIndex = boundedIndexOf(selector, u'#', sCurrent, sLast);
	if (sDotIndex != -1) {
		if (thisDotIndex == -1) {
			return false;
		}
		if (sCurrent == sDotIndex) {
			if ((thisLast - thisDotIndex) != (sLast - sDotIndex) || !$nc(selector)->regionMatches(sCurrent, this->name, thisDotIndex, (thisLast - thisDotIndex))) {
				return false;
			}
		} else if ((sLast - sCurrent) != (thisLast - thisCurrent) || !$nc(selector)->regionMatches(sCurrent, this->name, thisCurrent, (thisLast - thisCurrent))) {
			return false;
		}
		return true;
	}
	if (sPoundIndex != -1) {
		if (thisPoundIndex == -1) {
			return false;
		}
		if (sCurrent == sPoundIndex) {
			if ((thisLast - thisPoundIndex) != (sLast - sPoundIndex) || !$nc(selector)->regionMatches(sCurrent, this->name, thisPoundIndex, (thisLast - thisPoundIndex))) {
				return false;
			}
		} else if ((sLast - sCurrent) != (thisLast - thisCurrent) || !$nc(selector)->regionMatches(sCurrent, this->name, thisCurrent, (thisLast - thisCurrent))) {
			return false;
		}
		return true;
	}
	if (thisDotIndex != -1) {
		return (((thisDotIndex - thisCurrent) == (sLast - sCurrent)) && $nc(selector)->regionMatches(sCurrent, this->name, thisCurrent, thisDotIndex - thisCurrent));
	}
	if (thisPoundIndex != -1) {
		return (((thisPoundIndex - thisCurrent) == (sLast - sCurrent)) && $nc(selector)->regionMatches(sCurrent, this->name, thisCurrent, thisPoundIndex - thisCurrent));
	}
	return (((thisLast - thisCurrent) == (sLast - sCurrent)) && $nc(selector)->regionMatches(sCurrent, this->name, thisCurrent, thisLast - thisCurrent));
}

int32_t StyleSheet$ResolvedStyle::boundedIndexOf($String* string, char16_t search, int32_t start, int32_t end) {
	int32_t retValue = $nc(string)->indexOf((int32_t)search, start);
	if (retValue >= end) {
		return -1;
	}
	return retValue;
}

void StyleSheet$ResolvedStyle::addAttribute(Object$* name, Object$* value) {
}

void StyleSheet$ResolvedStyle::addAttributes($AttributeSet* attributes) {
}

void StyleSheet$ResolvedStyle::removeAttribute(Object$* name) {
}

void StyleSheet$ResolvedStyle::removeAttributes($Enumeration* names) {
}

void StyleSheet$ResolvedStyle::removeAttributes($AttributeSet* attributes) {
}

void StyleSheet$ResolvedStyle::setResolveParent($AttributeSet* parent) {
}

$String* StyleSheet$ResolvedStyle::getName() {
	return this->name;
}

void StyleSheet$ResolvedStyle::addChangeListener($ChangeListener* l) {
}

void StyleSheet$ResolvedStyle::removeChangeListener($ChangeListener* l) {
}

$ChangeListenerArray* StyleSheet$ResolvedStyle::getChangeListeners() {
	return $new($ChangeListenerArray, 0);
}

StyleSheet$ResolvedStyle::StyleSheet$ResolvedStyle() {
}

$Class* StyleSheet$ResolvedStyle::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$ResolvedStyle, name, initialize, &_StyleSheet$ResolvedStyle_ClassInfo_, allocate$StyleSheet$ResolvedStyle);
	return class$;
}

$Class* StyleSheet$ResolvedStyle::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax