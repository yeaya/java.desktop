#include <javax/swing/text/StyleContext$NamedStyle.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

#undef EMPTY

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext$NamedStyle_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyleContext;", nullptr, $FINAL | $SYNTHETIC, $field(StyleContext$NamedStyle, this$0)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(StyleContext$NamedStyle, listenerList)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(StyleContext$NamedStyle, changeEvent)},
	{"attributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(StyleContext$NamedStyle, attributes)},
	{}
};

$MethodInfo _StyleContext$NamedStyle_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/StyleContext;Ljava/lang/String;Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$NamedStyle::*)($StyleContext*,$String*,$Style*)>(&StyleContext$NamedStyle::init$))},
	{"<init>", "(Ljavax/swing/text/StyleContext;Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$NamedStyle::*)($StyleContext*,$Style*)>(&StyleContext$NamedStyle::init$))},
	{"<init>", "(Ljavax/swing/text/StyleContext;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$NamedStyle::*)($StyleContext*)>(&StyleContext$NamedStyle::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext$NamedStyle::*)($ObjectInputStream*)>(&StyleContext$NamedStyle::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext$NamedStyle::*)($ObjectOutputStream*)>(&StyleContext$NamedStyle::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _StyleContext$NamedStyle_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleContext$NamedStyle", "javax.swing.text.StyleContext", "NamedStyle", $PUBLIC},
	{}
};

$ClassInfo _StyleContext$NamedStyle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleContext$NamedStyle",
	"java.lang.Object",
	"javax.swing.text.Style,java.io.Serializable",
	_StyleContext$NamedStyle_FieldInfo_,
	_StyleContext$NamedStyle_MethodInfo_,
	nullptr,
	nullptr,
	_StyleContext$NamedStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext"
};

$Object* allocate$StyleContext$NamedStyle($Class* clazz) {
	return $of($alloc(StyleContext$NamedStyle));
}

int32_t StyleContext$NamedStyle::hashCode() {
	 return this->$Style::hashCode();
}

bool StyleContext$NamedStyle::equals(Object$* arg0) {
	 return this->$Style::equals(arg0);
}

$Object* StyleContext$NamedStyle::clone() {
	 return this->$Style::clone();
}

void StyleContext$NamedStyle::finalize() {
	this->$Style::finalize();
}

void StyleContext$NamedStyle::init$($StyleContext* this$0, $String* name, $Style* parent) {
	$set(this, this$0, this$0);
	$set(this, listenerList, $new($EventListenerList));
	$set(this, changeEvent, nullptr);
	$set(this, attributes, this$0->getEmptySet());
	if (name != nullptr) {
		setName(name);
	}
	if (parent != nullptr) {
		setResolveParent(parent);
	}
}

void StyleContext$NamedStyle::init$($StyleContext* this$0, $Style* parent) {
	StyleContext$NamedStyle::init$(this$0, nullptr, parent);
}

void StyleContext$NamedStyle::init$($StyleContext* this$0) {
	$set(this, this$0, this$0);
	$set(this, listenerList, $new($EventListenerList));
	$set(this, changeEvent, nullptr);
	$set(this, attributes, this$0->getEmptySet());
}

$String* StyleContext$NamedStyle::toString() {
	return $str({"NamedStyle:"_s, $(getName()), " "_s, this->attributes});
}

$String* StyleContext$NamedStyle::getName() {
	$init($StyleConstants);
	if (isDefined($StyleConstants::NameAttribute)) {
		return $nc($of($(getAttribute($StyleConstants::NameAttribute))))->toString();
	}
	return nullptr;
}

void StyleContext$NamedStyle::setName($String* name) {
	if (name != nullptr) {
		$init($StyleConstants);
		this->addAttribute($StyleConstants::NameAttribute, name);
	}
}

void StyleContext$NamedStyle::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void StyleContext$NamedStyle::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* StyleContext$NamedStyle::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void StyleContext$NamedStyle::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$EventListenerArray* StyleContext$NamedStyle::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

int32_t StyleContext$NamedStyle::getAttributeCount() {
	return $nc(this->attributes)->getAttributeCount();
}

bool StyleContext$NamedStyle::isDefined(Object$* attrName) {
	return $nc(this->attributes)->isDefined(attrName);
}

bool StyleContext$NamedStyle::isEqual($AttributeSet* attr) {
	return $nc(this->attributes)->isEqual(attr);
}

$AttributeSet* StyleContext$NamedStyle::copyAttributes() {
	$var(StyleContext$NamedStyle, a, $new(StyleContext$NamedStyle, this->this$0));
	$set(a, attributes, $nc(this->attributes)->copyAttributes());
	return a;
}

$Object* StyleContext$NamedStyle::getAttribute(Object$* attrName) {
	return $of($nc(this->attributes)->getAttribute(attrName));
}

$Enumeration* StyleContext$NamedStyle::getAttributeNames() {
	return $nc(this->attributes)->getAttributeNames();
}

bool StyleContext$NamedStyle::containsAttribute(Object$* name, Object$* value) {
	return $nc(this->attributes)->containsAttribute(name, value);
}

bool StyleContext$NamedStyle::containsAttributes($AttributeSet* attrs) {
	return $nc(this->attributes)->containsAttributes(attrs);
}

$AttributeSet* StyleContext$NamedStyle::getResolveParent() {
	return $nc(this->attributes)->getResolveParent();
}

void StyleContext$NamedStyle::addAttribute(Object$* name, Object$* value) {
	$var($StyleContext, context, this->this$0);
	$set(this, attributes, $nc(context)->addAttribute(this->attributes, name, value));
	fireStateChanged();
}

void StyleContext$NamedStyle::addAttributes($AttributeSet* attr) {
	$var($StyleContext, context, this->this$0);
	$set(this, attributes, $nc(context)->addAttributes(this->attributes, attr));
	fireStateChanged();
}

void StyleContext$NamedStyle::removeAttribute(Object$* name) {
	$var($StyleContext, context, this->this$0);
	$set(this, attributes, $nc(context)->removeAttribute(this->attributes, name));
	fireStateChanged();
}

void StyleContext$NamedStyle::removeAttributes($Enumeration* names) {
	$var($StyleContext, context, this->this$0);
	$set(this, attributes, $nc(context)->removeAttributes(this->attributes, names));
	fireStateChanged();
}

void StyleContext$NamedStyle::removeAttributes($AttributeSet* attrs) {
	$var($StyleContext, context, this->this$0);
	if ($equals(attrs, this)) {
		$set(this, attributes, $nc(context)->getEmptySet());
	} else {
		$set(this, attributes, $nc(context)->removeAttributes(this->attributes, attrs));
	}
	fireStateChanged();
}

void StyleContext$NamedStyle::setResolveParent($AttributeSet* parent) {
	if (parent != nullptr) {
		$init($StyleConstants);
		addAttribute($StyleConstants::ResolveAttribute, parent);
	} else {
		$init($StyleConstants);
		removeAttribute($StyleConstants::ResolveAttribute);
	}
}

void StyleContext$NamedStyle::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$StyleContext::writeAttributeSet(s, this->attributes);
}

void StyleContext$NamedStyle::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$init($SimpleAttributeSet);
	$set(this, attributes, $SimpleAttributeSet::EMPTY);
	$StyleContext::readAttributeSet(s, this);
}

StyleContext$NamedStyle::StyleContext$NamedStyle() {
}

$Class* StyleContext$NamedStyle::load$($String* name, bool initialize) {
	$loadClass(StyleContext$NamedStyle, name, initialize, &_StyleContext$NamedStyle_ClassInfo_, allocate$StyleContext$NamedStyle);
	return class$;
}

$Class* StyleContext$NamedStyle::class$ = nullptr;

		} // text
	} // swing
} // javax