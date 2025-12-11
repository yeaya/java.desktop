#include <javax/swing/text/html/parser/Element.h>

#include <java/util/BitSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/text/html/parser/AttributeList.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ANY
#undef CDATA
#undef EMPTY
#undef MAX_INDEX_KEY
#undef RCDATA

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $AttributeList = ::javax::swing::text::html::parser::AttributeList;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _Element_FieldInfo_[] = {
	{"index", "I", nullptr, $PUBLIC, $field(Element, index)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Element, name)},
	{"oStart", "Z", nullptr, $PUBLIC, $field(Element, oStart)},
	{"oEnd", "Z", nullptr, $PUBLIC, $field(Element, oEnd)},
	{"inclusions", "Ljava/util/BitSet;", nullptr, $PUBLIC, $field(Element, inclusions)},
	{"exclusions", "Ljava/util/BitSet;", nullptr, $PUBLIC, $field(Element, exclusions)},
	{"type", "I", nullptr, $PUBLIC, $field(Element, type)},
	{"content", "Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC, $field(Element, content)},
	{"atts", "Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $field(Element, atts)},
	{"data", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Element, data)},
	{"MAX_INDEX_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Element, MAX_INDEX_KEY)},
	{"contentTypes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Integer;>;", $STATIC, $staticField(Element, contentTypes)},
	{}
};

$MethodInfo _Element_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Element::*)()>(&Element::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(Element::*)($String*,int32_t)>(&Element::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $method(static_cast<$AttributeList*(Element::*)($String*)>(&Element::getAttribute))},
	{"getAttributeByValue", "(Ljava/lang/String;)Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $method(static_cast<$AttributeList*(Element::*)($String*)>(&Element::getAttributeByValue))},
	{"getAttributes", "()Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $method(static_cast<$AttributeList*(Element::*)()>(&Element::getAttributes))},
	{"getContent", "()Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC, $method(static_cast<$ContentModel*(Element::*)()>(&Element::getContent))},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Element::*)()>(&Element::getIndex))},
	{"getMaxIndex", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Element::getMaxIndex))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Element::*)()>(&Element::getName))},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Element::*)()>(&Element::getType))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Element::*)()>(&Element::isEmpty))},
	{"name2type", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Element::name2type))},
	{"omitEnd", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Element::*)()>(&Element::omitEnd))},
	{"omitStart", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Element::*)()>(&Element::omitStart))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Element_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.parser.Element",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants,java.io.Serializable",
	_Element_FieldInfo_,
	_Element_MethodInfo_
};

$Object* allocate$Element($Class* clazz) {
	return $of($alloc(Element));
}

int32_t Element::hashCode() {
	 return this->$DTDConstants::hashCode();
}

bool Element::equals(Object$* arg0) {
	 return this->$DTDConstants::equals(arg0);
}

$Object* Element::clone() {
	 return this->$DTDConstants::clone();
}

void Element::finalize() {
	this->$DTDConstants::finalize();
}

$Object* Element::MAX_INDEX_KEY = nullptr;
$Hashtable* Element::contentTypes = nullptr;

void Element::init$() {
	this->type = $DTDConstants::ANY;
}

void Element::init$($String* name, int32_t index) {
	$useLocalCurrentObjectStackCache();
	this->type = $DTDConstants::ANY;
	$set(this, name, name);
	this->index = index;
	if (index > getMaxIndex()) {
		$nc($($AppContext::getAppContext()))->put(Element::MAX_INDEX_KEY, $($Integer::valueOf(index)));
	}
}

int32_t Element::getMaxIndex() {
	$init(Element);
	$useLocalCurrentObjectStackCache();
	$var($Integer, value, $cast($Integer, $nc($($AppContext::getAppContext()))->get(Element::MAX_INDEX_KEY)));
	return (value != nullptr) ? $nc(value)->intValue() : 0;
}

$String* Element::getName() {
	return this->name;
}

bool Element::omitStart() {
	return this->oStart;
}

bool Element::omitEnd() {
	return this->oEnd;
}

int32_t Element::getType() {
	return this->type;
}

$ContentModel* Element::getContent() {
	return this->content;
}

$AttributeList* Element::getAttributes() {
	return this->atts;
}

int32_t Element::getIndex() {
	return this->index;
}

bool Element::isEmpty() {
	return this->type == $DTDConstants::EMPTY;
}

$String* Element::toString() {
	return this->name;
}

$AttributeList* Element::getAttribute($String* name) {
	{
		$var($AttributeList, a, this->atts);
		for (; a != nullptr; $assign(a, $nc(a)->next)) {
			if ($nc(a->name)->equals(name)) {
				return a;
			}
		}
	}
	return nullptr;
}

$AttributeList* Element::getAttributeByValue($String* value) {
	{
		$var($AttributeList, a, this->atts);
		for (; a != nullptr; $assign(a, $nc(a)->next)) {
			if ((a->values != nullptr) && $nc(a->values)->contains(value)) {
				return a;
			}
		}
	}
	return nullptr;
}

int32_t Element::name2type($String* nm) {
	$init(Element);
	$var($Integer, val, $cast($Integer, $nc(Element::contentTypes)->get(nm)));
	return (val != nullptr) ? $nc(val)->intValue() : 0;
}

void clinit$Element($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Element::MAX_INDEX_KEY, $new($Object));
	$assignStatic(Element::contentTypes, $new($Hashtable));
	{
		$nc(Element::contentTypes)->put("CDATA"_s, $($Integer::valueOf($DTDConstants::CDATA)));
		$nc(Element::contentTypes)->put("RCDATA"_s, $($Integer::valueOf($DTDConstants::RCDATA)));
		$nc(Element::contentTypes)->put("EMPTY"_s, $($Integer::valueOf($DTDConstants::EMPTY)));
		$nc(Element::contentTypes)->put("ANY"_s, $($Integer::valueOf($DTDConstants::ANY)));
	}
}

Element::Element() {
}

$Class* Element::load$($String* name, bool initialize) {
	$loadClass(Element, name, initialize, &_Element_ClassInfo_, clinit$Element, allocate$Element);
	return class$;
}

$Class* Element::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax