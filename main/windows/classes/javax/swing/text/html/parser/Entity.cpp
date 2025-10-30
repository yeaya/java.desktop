#include <javax/swing/text/html/parser/Entity.h>

#include <java/util/Hashtable.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <jcpp.h>

#undef CDATA
#undef ENDTAG
#undef GENERAL
#undef MD
#undef MS
#undef PARAMETER
#undef PI
#undef PUBLIC
#undef SDATA
#undef STARTTAG
#undef SYSTEM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _Entity_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity, name)},
	{"type", "I", nullptr, $PUBLIC, $field(Entity, type)},
	{"data", "[C", nullptr, $PUBLIC, $field(Entity, data)},
	{"entityTypes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Integer;>;", $STATIC, $staticField(Entity, entityTypes)},
	{}
};

$MethodInfo _Entity_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I[C)V", nullptr, $PUBLIC, $method(static_cast<void(Entity::*)($String*,int32_t,$chars*)>(&Entity::init$))},
	{"getData", "()[C", nullptr, $PUBLIC, $method(static_cast<$chars*(Entity::*)()>(&Entity::getData))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Entity::*)()>(&Entity::getName))},
	{"getString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Entity::*)()>(&Entity::getString))},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Entity::*)()>(&Entity::getType))},
	{"isGeneral", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Entity::*)()>(&Entity::isGeneral))},
	{"isParameter", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Entity::*)()>(&Entity::isParameter))},
	{"name2type", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Entity::name2type))},
	{}
};

$ClassInfo _Entity_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.parser.Entity",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants",
	_Entity_FieldInfo_,
	_Entity_MethodInfo_
};

$Object* allocate$Entity($Class* clazz) {
	return $of($alloc(Entity));
}

$Hashtable* Entity::entityTypes = nullptr;

void Entity::init$($String* name, int32_t type, $chars* data) {
	$set(this, name, name);
	this->type = type;
	$set(this, data, data);
}

$String* Entity::getName() {
	return this->name;
}

int32_t Entity::getType() {
	return (int32_t)(this->type & (uint32_t)0x0000FFFF);
}

bool Entity::isParameter() {
	return ((int32_t)(this->type & (uint32_t)$DTDConstants::PARAMETER)) != 0;
}

bool Entity::isGeneral() {
	return ((int32_t)(this->type & (uint32_t)$DTDConstants::GENERAL)) != 0;
}

$chars* Entity::getData() {
	return this->data;
}

$String* Entity::getString() {
	return $new($String, this->data, 0, $nc(this->data)->length);
}

int32_t Entity::name2type($String* nm) {
	$init(Entity);
	$var($Integer, i, $cast($Integer, $nc(Entity::entityTypes)->get(nm)));
	return (i == nullptr) ? $DTDConstants::CDATA : $nc(i)->intValue();
}

void clinit$Entity($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Entity::entityTypes, $new($Hashtable));
	{
		$nc(Entity::entityTypes)->put("PUBLIC"_s, $($Integer::valueOf($DTDConstants::PUBLIC)));
		$nc(Entity::entityTypes)->put("CDATA"_s, $($Integer::valueOf($DTDConstants::CDATA)));
		$nc(Entity::entityTypes)->put("SDATA"_s, $($Integer::valueOf($DTDConstants::SDATA)));
		$nc(Entity::entityTypes)->put("PI"_s, $($Integer::valueOf($DTDConstants::PI)));
		$nc(Entity::entityTypes)->put("STARTTAG"_s, $($Integer::valueOf($DTDConstants::STARTTAG)));
		$nc(Entity::entityTypes)->put("ENDTAG"_s, $($Integer::valueOf($DTDConstants::ENDTAG)));
		$nc(Entity::entityTypes)->put("MS"_s, $($Integer::valueOf($DTDConstants::MS)));
		$nc(Entity::entityTypes)->put("MD"_s, $($Integer::valueOf($DTDConstants::MD)));
		$nc(Entity::entityTypes)->put("SYSTEM"_s, $($Integer::valueOf($DTDConstants::SYSTEM)));
	}
}

Entity::Entity() {
}

$Class* Entity::load$($String* name, bool initialize) {
	$loadClass(Entity, name, initialize, &_Entity_ClassInfo_, clinit$Entity, allocate$Entity);
	return class$;
}

$Class* Entity::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax