#include <javax/swing/text/html/parser/AttributeList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <jcpp.h>

#undef CDATA
#undef CONREF
#undef CURRENT
#undef ENTITIES
#undef ENTITY
#undef FIXED
#undef ID
#undef IDREF
#undef IDREFS
#undef IMPLIED
#undef NAME
#undef NAMES
#undef NMTOKEN
#undef NMTOKENS
#undef NOTATION
#undef NUMBER
#undef NUMBERS
#undef NUTOKEN
#undef NUTOKENS
#undef REQUIRED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _AttributeList_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AttributeList, name)},
	{"type", "I", nullptr, $PUBLIC, $field(AttributeList, type)},
	{"values", "Ljava/util/Vector;", "Ljava/util/Vector<*>;", $PUBLIC, $field(AttributeList, values)},
	{"modifier", "I", nullptr, $PUBLIC, $field(AttributeList, modifier)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AttributeList, value)},
	{"next", "Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $field(AttributeList, next)},
	{"attributeTypes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC, $staticField(AttributeList, attributeTypes)},
	{}
};

$MethodInfo _AttributeList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AttributeList::*)()>(&AttributeList::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeList::*)($String*)>(&AttributeList::init$))},
	{"<init>", "(Ljava/lang/String;IILjava/lang/String;Ljava/util/Vector;Ljavax/swing/text/html/parser/AttributeList;)V", "(Ljava/lang/String;IILjava/lang/String;Ljava/util/Vector<*>;Ljavax/swing/text/html/parser/AttributeList;)V", $PUBLIC, $method(static_cast<void(AttributeList::*)($String*,int32_t,int32_t,$String*,$Vector*,AttributeList*)>(&AttributeList::init$))},
	{"defineAttributeType", "(Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&AttributeList::defineAttributeType))},
	{"getModifier", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeList::*)()>(&AttributeList::getModifier))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(AttributeList::*)()>(&AttributeList::getName))},
	{"getNext", "()Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PUBLIC, $method(static_cast<AttributeList*(AttributeList::*)()>(&AttributeList::getNext))},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeList::*)()>(&AttributeList::getType))},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(AttributeList::*)()>(&AttributeList::getValue))},
	{"getValues", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC, $method(static_cast<$Enumeration*(AttributeList::*)()>(&AttributeList::getValues))},
	{"name2type", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&AttributeList::name2type))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type2name", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&AttributeList::type2name))},
	{}
};

$ClassInfo _AttributeList_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.parser.AttributeList",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants,java.io.Serializable",
	_AttributeList_FieldInfo_,
	_AttributeList_MethodInfo_
};

$Object* allocate$AttributeList($Class* clazz) {
	return $of($alloc(AttributeList));
}

int32_t AttributeList::hashCode() {
	 return this->$DTDConstants::hashCode();
}

bool AttributeList::equals(Object$* arg0) {
	 return this->$DTDConstants::equals(arg0);
}

$Object* AttributeList::clone() {
	 return this->$DTDConstants::clone();
}

void AttributeList::finalize() {
	this->$DTDConstants::finalize();
}


$Hashtable* AttributeList::attributeTypes = nullptr;

void AttributeList::init$() {
}

void AttributeList::init$($String* name) {
	$set(this, name, name);
}

void AttributeList::init$($String* name, int32_t type, int32_t modifier, $String* value, $Vector* values, AttributeList* next) {
	$set(this, name, name);
	this->type = type;
	this->modifier = modifier;
	$set(this, value, value);
	$set(this, values, values);
	$set(this, next, next);
}

$String* AttributeList::getName() {
	return this->name;
}

int32_t AttributeList::getType() {
	return this->type;
}

int32_t AttributeList::getModifier() {
	return this->modifier;
}

$Enumeration* AttributeList::getValues() {
	return (this->values != nullptr) ? $nc(this->values)->elements() : ($Enumeration*)nullptr;
}

$String* AttributeList::getValue() {
	return this->value;
}

AttributeList* AttributeList::getNext() {
	return this->next;
}

$String* AttributeList::toString() {
	return this->name;
}

void AttributeList::defineAttributeType($String* nm, int32_t val) {
	$init(AttributeList);
	$var($Integer, num, $Integer::valueOf(val));
	$nc(AttributeList::attributeTypes)->put(nm, num);
	$nc(AttributeList::attributeTypes)->put(num, nm);
}

int32_t AttributeList::name2type($String* nm) {
	$init(AttributeList);
	$var($Integer, i, $cast($Integer, $nc(AttributeList::attributeTypes)->get(nm)));
	return (i == nullptr) ? $DTDConstants::CDATA : $nc(i)->intValue();
}

$String* AttributeList::type2name(int32_t tp) {
	$init(AttributeList);
	return $cast($String, $nc(AttributeList::attributeTypes)->get($($Integer::valueOf(tp))));
}

void clinit$AttributeList($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AttributeList::attributeTypes, $new($Hashtable));
	{
		AttributeList::defineAttributeType("CDATA"_s, $DTDConstants::CDATA);
		AttributeList::defineAttributeType("ENTITY"_s, $DTDConstants::ENTITY);
		AttributeList::defineAttributeType("ENTITIES"_s, $DTDConstants::ENTITIES);
		AttributeList::defineAttributeType("ID"_s, $DTDConstants::ID);
		AttributeList::defineAttributeType("IDREF"_s, $DTDConstants::IDREF);
		AttributeList::defineAttributeType("IDREFS"_s, $DTDConstants::IDREFS);
		AttributeList::defineAttributeType("NAME"_s, $DTDConstants::NAME);
		AttributeList::defineAttributeType("NAMES"_s, $DTDConstants::NAMES);
		AttributeList::defineAttributeType("NMTOKEN"_s, $DTDConstants::NMTOKEN);
		AttributeList::defineAttributeType("NMTOKENS"_s, $DTDConstants::NMTOKENS);
		AttributeList::defineAttributeType("NOTATION"_s, $DTDConstants::NOTATION);
		AttributeList::defineAttributeType("NUMBER"_s, $DTDConstants::NUMBER);
		AttributeList::defineAttributeType("NUMBERS"_s, $DTDConstants::NUMBERS);
		AttributeList::defineAttributeType("NUTOKEN"_s, $DTDConstants::NUTOKEN);
		AttributeList::defineAttributeType("NUTOKENS"_s, $DTDConstants::NUTOKENS);
		$nc(AttributeList::attributeTypes)->put("fixed"_s, $($Integer::valueOf($DTDConstants::FIXED)));
		$nc(AttributeList::attributeTypes)->put("required"_s, $($Integer::valueOf($DTDConstants::REQUIRED)));
		$nc(AttributeList::attributeTypes)->put("current"_s, $($Integer::valueOf($DTDConstants::CURRENT)));
		$nc(AttributeList::attributeTypes)->put("conref"_s, $($Integer::valueOf($DTDConstants::CONREF)));
		$nc(AttributeList::attributeTypes)->put("implied"_s, $($Integer::valueOf($DTDConstants::IMPLIED)));
	}
}

AttributeList::AttributeList() {
}

$Class* AttributeList::load$($String* name, bool initialize) {
	$loadClass(AttributeList, name, initialize, &_AttributeList_ClassInfo_, clinit$AttributeList, allocate$AttributeList);
	return class$;
}

$Class* AttributeList::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax