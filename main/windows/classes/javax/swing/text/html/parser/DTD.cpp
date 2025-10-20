#include <javax/swing/text/html/parser/DTD.h>

#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/BitSet.h>
#include <java/util/Hashtable.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/swing/text/html/parser/AttributeList.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <javax/swing/text/html/parser/Element.h>
#include <javax/swing/text/html/parser/Entity.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef CDATA
#undef DTD
#undef DTD_HASH_KEY
#undef EMPTY
#undef FILE_VERSION
#undef GENERAL
#undef SDATA

using $DataInputStream = ::java::io::DataInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $Hashtable = ::java::util::Hashtable;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $AttributeList = ::javax::swing::text::html::parser::AttributeList;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;
using $Element = ::javax::swing::text::html::parser::Element;
using $Entity = ::javax::swing::text::html::parser::Entity;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _DTD_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DTD, name)},
	{"elements", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/parser/Element;>;", $PUBLIC, $field(DTD, elements)},
	{"elementHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/parser/Element;>;", $PUBLIC, $field(DTD, elementHash)},
	{"entityHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljavax/swing/text/html/parser/Entity;>;", $PUBLIC, $field(DTD, entityHash)},
	{"pcdata", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, pcdata)},
	{"html", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, html)},
	{"meta", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, meta)},
	{"base", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, base)},
	{"isindex", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, isindex)},
	{"head", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, head)},
	{"body", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, body)},
	{"applet", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, applet)},
	{"param", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, param)},
	{"p", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, p)},
	{"title", "Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC | $FINAL, $field(DTD, title)},
	{"style", "Ljavax/swing/text/html/parser/Element;", nullptr, $FINAL, $field(DTD, style)},
	{"link", "Ljavax/swing/text/html/parser/Element;", nullptr, $FINAL, $field(DTD, link)},
	{"script", "Ljavax/swing/text/html/parser/Element;", nullptr, $FINAL, $field(DTD, script)},
	{"FILE_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTD, FILE_VERSION)},
	{"DTD_HASH_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTD, DTD_HASH_KEY)},
	{}
};

$MethodInfo _DTD_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(DTD::*)($String*)>(&DTD::init$))},
	{"defAttributeList", "(Ljava/lang/String;IILjava/lang/String;Ljava/lang/String;Ljavax/swing/text/html/parser/AttributeList;)Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PROTECTED},
	{"defContentModel", "(ILjava/lang/Object;Ljavax/swing/text/html/parser/ContentModel;)Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PROTECTED},
	{"defElement", "(Ljava/lang/String;IZZLjavax/swing/text/html/parser/ContentModel;[Ljava/lang/String;[Ljava/lang/String;Ljavax/swing/text/html/parser/AttributeList;)Ljavax/swing/text/html/parser/Element;", nullptr, $PROTECTED},
	{"defEntity", "(Ljava/lang/String;II)Ljavax/swing/text/html/parser/Entity;", nullptr, $PUBLIC},
	{"defEntity", "(Ljava/lang/String;ILjava/lang/String;)Ljavax/swing/text/html/parser/Entity;", nullptr, $PROTECTED},
	{"defineAttributes", "(Ljava/lang/String;Ljavax/swing/text/html/parser/AttributeList;)V", nullptr, $PUBLIC},
	{"defineElement", "(Ljava/lang/String;IZZLjavax/swing/text/html/parser/ContentModel;Ljava/util/BitSet;Ljava/util/BitSet;Ljavax/swing/text/html/parser/AttributeList;)Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC},
	{"defineEntity", "(Ljava/lang/String;I[C)Ljavax/swing/text/html/parser/Entity;", nullptr, $PUBLIC},
	{"elementExists", "(Ljava/lang/String;)Z", nullptr, 0},
	{"getDTD", "(Ljava/lang/String;)Ljavax/swing/text/html/parser/DTD;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DTD*(*)($String*)>(&DTD::getDTD)), "java.io.IOException"},
	{"getDtdHash", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/parser/DTD;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)()>(&DTD::getDtdHash))},
	{"getElement", "(Ljava/lang/String;)Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC},
	{"getElement", "(I)Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC},
	{"getEntity", "(Ljava/lang/String;)Ljavax/swing/text/html/parser/Entity;", nullptr, $PUBLIC},
	{"getEntity", "(I)Ljavax/swing/text/html/parser/Entity;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"putDTDHash", "(Ljava/lang/String;Ljavax/swing/text/html/parser/DTD;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,DTD*)>(&DTD::putDTDHash))},
	{"read", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readAttributeList", "(Ljava/io/DataInputStream;[Ljava/lang/String;)Ljavax/swing/text/html/parser/AttributeList;", nullptr, $PRIVATE, $method(static_cast<$AttributeList*(DTD::*)($DataInputStream*,$StringArray*)>(&DTD::readAttributeList)), "java.io.IOException"},
	{"readContentModel", "(Ljava/io/DataInputStream;[Ljava/lang/String;)Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PRIVATE, $method(static_cast<$ContentModel*(DTD::*)($DataInputStream*,$StringArray*)>(&DTD::readContentModel)), "java.io.IOException"},
	{"readNameArray", "(Ljava/io/DataInputStream;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(DTD::*)($DataInputStream*,$StringArray*)>(&DTD::readNameArray)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DTD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.parser.DTD",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants",
	_DTD_FieldInfo_,
	_DTD_MethodInfo_
};

$Object* allocate$DTD($Class* clazz) {
	return $of($alloc(DTD));
}


$Object* DTD::DTD_HASH_KEY = nullptr;

void DTD::init$($String* name) {
	$set(this, elements, $new($Vector));
	$set(this, elementHash, $new($Hashtable));
	$set(this, entityHash, $new($Hashtable));
	$set(this, pcdata, getElement("#pcdata"_s));
	$set(this, html, getElement("html"_s));
	$set(this, meta, getElement("meta"_s));
	$set(this, base, getElement("base"_s));
	$set(this, isindex, getElement("isindex"_s));
	$set(this, head, getElement("head"_s));
	$set(this, body, getElement("body"_s));
	$set(this, applet, getElement("applet"_s));
	$set(this, param, getElement("param"_s));
	$set(this, p, getElement("p"_s));
	$set(this, title, getElement("title"_s));
	$set(this, style, getElement("style"_s));
	$set(this, link, getElement("link"_s));
	$set(this, script, getElement("script"_s));
	$set(this, name, name);
	defEntity("#RE"_s, $DTDConstants::GENERAL, (int32_t)u'\r');
	defEntity("#RS"_s, $DTDConstants::GENERAL, (int32_t)u'\n');
	defEntity("#SPACE"_s, $DTDConstants::GENERAL, (int32_t)u' ');
	defineElement("unknown"_s, $DTDConstants::EMPTY, false, true, nullptr, nullptr, nullptr, nullptr);
}

$String* DTD::getName() {
	return this->name;
}

$Entity* DTD::getEntity($String* name) {
	return $cast($Entity, $nc(this->entityHash)->get(name));
}

$Entity* DTD::getEntity(int32_t ch) {
	return $cast($Entity, $nc(this->entityHash)->get($($Integer::valueOf(ch))));
}

bool DTD::elementExists($String* name) {
	bool var$0 = !"unknown"_s->equals(name);
	return var$0 && ($nc(this->elementHash)->get(name) != nullptr);
}

$Element* DTD::getElement($String* name) {
	$var($Element, e, $cast($Element, $nc(this->elementHash)->get(name)));
	if (e == nullptr) {
		$assign(e, $new($Element, name, $nc(this->elements)->size()));
		$nc(this->elements)->addElement(e);
		$nc(this->elementHash)->put(name, e);
	}
	return e;
}

$Element* DTD::getElement(int32_t index) {
	return $cast($Element, $nc(this->elements)->elementAt(index));
}

$Entity* DTD::defineEntity($String* name, int32_t type, $chars* data) {
	$useLocalCurrentObjectStackCache();
	$var($Entity, ent, $cast($Entity, $nc(this->entityHash)->get(name)));
	if (ent == nullptr) {
		$assign(ent, $new($Entity, name, type, data));
		$nc(this->entityHash)->put(name, ent);
		if ((((int32_t)(type & (uint32_t)$DTDConstants::GENERAL)) != 0) && ($nc(data)->length == 1)) {
			switch ((int32_t)(type & (uint32_t)~$DTDConstants::GENERAL)) {
			case $DTDConstants::CDATA:
				{}
			case $DTDConstants::SDATA:
				{
					$nc(this->entityHash)->put($($Integer::valueOf((int32_t)data->get(0))), ent);
					break;
				}
			}
		}
	}
	return ent;
}

$Element* DTD::defineElement($String* name, int32_t type, bool omitStart, bool omitEnd, $ContentModel* content, $BitSet* exclusions, $BitSet* inclusions, $AttributeList* atts) {
	$var($Element, e, getElement(name));
	$nc(e)->type = type;
	e->oStart = omitStart;
	e->oEnd = omitEnd;
	$set(e, content, content);
	$set(e, exclusions, exclusions);
	$set(e, inclusions, inclusions);
	$set(e, atts, atts);
	return e;
}

void DTD::defineAttributes($String* name, $AttributeList* atts) {
	$var($Element, e, getElement(name));
	$set($nc(e), atts, atts);
}

$Entity* DTD::defEntity($String* name, int32_t type, int32_t ch) {
	$var($chars, data, $new($chars, {(char16_t)ch}));
	return defineEntity(name, type, data);
}

$Entity* DTD::defEntity($String* name, int32_t type, $String* str) {
	int32_t len = $nc(str)->length();
	$var($chars, data, $new($chars, len));
	str->getChars(0, len, data, 0);
	return defineEntity(name, type, data);
}

$Element* DTD::defElement($String* name, int32_t type, bool omitStart, bool omitEnd, $ContentModel* content, $StringArray* exclusions, $StringArray* inclusions, $AttributeList* atts) {
	$useLocalCurrentObjectStackCache();
	$var($BitSet, excl, nullptr);
	if (exclusions != nullptr && exclusions->length > 0) {
		$assign(excl, $new($BitSet));
		{
			$var($StringArray, arr$, exclusions);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, str, arr$->get(i$));
				{
					if ($nc(str)->length() > 0) {
						excl->set($nc($(getElement(str)))->getIndex());
					}
				}
			}
		}
	}
	$var($BitSet, incl, nullptr);
	if (inclusions != nullptr && inclusions->length > 0) {
		$assign(incl, $new($BitSet));
		{
			$var($StringArray, arr$, inclusions);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, str, arr$->get(i$));
				{
					if ($nc(str)->length() > 0) {
						incl->set($nc($(getElement(str)))->getIndex());
					}
				}
			}
		}
	}
	return defineElement(name, type, omitStart, omitEnd, content, excl, incl, atts);
}

$AttributeList* DTD::defAttributeList($String* name, int32_t type, int32_t modifier, $String* value, $String* values, $AttributeList* atts) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, vals, nullptr);
	if (values != nullptr) {
		$assign(vals, $new($Vector));
		{
			$var($StringTokenizer, s, $new($StringTokenizer, values, "|"_s));
			for (; s->hasMoreTokens();) {
				$var($String, str, s->nextToken());
				if ($nc(str)->length() > 0) {
					vals->addElement(str);
				}
			}
		}
	}
	return $new($AttributeList, name, type, modifier, value, vals, atts);
}

$ContentModel* DTD::defContentModel(int32_t type, Object$* obj, $ContentModel* next) {
	return $new($ContentModel, type, obj, next);
}

$String* DTD::toString() {
	return this->name;
}

void DTD::putDTDHash($String* name, DTD* dtd) {
	$init(DTD);
	$nc($(getDtdHash()))->put(name, dtd);
}

DTD* DTD::getDTD($String* name$renamed) {
	$init(DTD);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$assign(name, $nc(name)->toLowerCase());
	$var(DTD, dtd, $cast(DTD, $nc($(getDtdHash()))->get(name)));
	if (dtd == nullptr) {
		$assign(dtd, $new(DTD, name));
	}
	return dtd;
}

$Hashtable* DTD::getDtdHash() {
	$init(DTD);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var($Hashtable, result, $cast($Hashtable, $nc(appContext)->get(DTD::DTD_HASH_KEY)));
	if (result == nullptr) {
		$assign(result, $new($Hashtable));
		appContext->put(DTD::DTD_HASH_KEY, result);
	}
	return result;
}

void DTD::read($DataInputStream* in) {
	$useLocalCurrentObjectStackCache();
	if ($nc(in)->readInt() != DTD::FILE_VERSION) {
	}
	$var($StringArray, names, $new($StringArray, $nc(in)->readShort()));
	for (int32_t i = 0; i < names->length; ++i) {
		names->set(i, $(in->readUTF()));
	}
	int32_t num = in->readShort();
	for (int32_t i = 0; i < num; ++i) {
		int16_t nameId = in->readShort();
		int32_t type = in->readByte();
		$var($String, name, in->readUTF());
		defEntity(names->get(nameId), type | $DTDConstants::GENERAL, name);
	}
	num = in->readShort();
	for (int32_t i = 0; i < num; ++i) {
		int16_t nameId = in->readShort();
		int32_t type = in->readByte();
		int8_t flags = in->readByte();
		$var($ContentModel, m, readContentModel(in, names));
		$var($StringArray, exclusions, readNameArray(in, names));
		$var($StringArray, inclusions, readNameArray(in, names));
		$var($AttributeList, atts, readAttributeList(in, names));
		defElement(names->get(nameId), type, (((int32_t)(flags & (uint32_t)1)) != 0), (((int32_t)(flags & (uint32_t)2)) != 0), m, exclusions, inclusions, atts);
	}
}

$ContentModel* DTD::readContentModel($DataInputStream* in, $StringArray* names) {
	$useLocalCurrentObjectStackCache();
	int8_t flag = $nc(in)->readByte();
	switch (flag) {
	case 0:
		{
			return nullptr;
		}
	case 1:
		{
			{
				int32_t type = in->readByte();
				$var($ContentModel, m, readContentModel(in, names));
				$var($ContentModel, next, readContentModel(in, names));
				return defContentModel(type, m, next);
			}
		}
	case 2:
		{
			{
				int32_t type = in->readByte();
				$var($Element, el, getElement($nc(names)->get(in->readShort())));
				$var($ContentModel, next, readContentModel(in, names));
				return defContentModel(type, el, next);
			}
		}
	default:
		{
			$throwNew($IOException, "bad bdtd"_s);
		}
	}
}

$StringArray* DTD::readNameArray($DataInputStream* in, $StringArray* names) {
	int32_t num = $nc(in)->readShort();
	if (num == 0) {
		return nullptr;
	}
	$var($StringArray, result, $new($StringArray, num));
	for (int32_t i = 0; i < num; ++i) {
		result->set(i, $nc(names)->get(in->readShort()));
	}
	return result;
}

$AttributeList* DTD::readAttributeList($DataInputStream* in, $StringArray* names) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeList, result, nullptr);
	for (int32_t num = $nc(in)->readByte(); num > 0; --num) {
		int16_t nameId = in->readShort();
		int32_t type = in->readByte();
		int32_t modifier = in->readByte();
		int16_t valueId = in->readShort();
		$var($String, value, (valueId == -1) ? ($String*)nullptr : $nc(names)->get(valueId));
		$var($Vector, values, nullptr);
		int16_t numValues = in->readShort();
		if (numValues > 0) {
			$assign(values, $new($Vector, (int32_t)numValues));
			for (int32_t i = 0; i < numValues; ++i) {
				values->addElement(names->get(in->readShort()));
			}
		}
		$assign(result, $new($AttributeList, names->get(nameId), type, modifier, value, values, result));
	}
	return result;
}

void clinit$DTD($Class* class$) {
	$assignStatic(DTD::DTD_HASH_KEY, $new($Object));
}

DTD::DTD() {
}

$Class* DTD::load$($String* name, bool initialize) {
	$loadClass(DTD, name, initialize, &_DTD_ClassInfo_, clinit$DTD, allocate$DTD);
	return class$;
}

$Class* DTD::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax