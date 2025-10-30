#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>

#include <com/sun/imageio/plugins/common/StandardMetadataFormat.h>
#include <java/lang/Comparable.h>
#include <java/lang/Module.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl$Attribute.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl$Element.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_MAX
#undef CHILD_POLICY_REPEAT
#undef DATATYPE_BOOLEAN
#undef DATATYPE_DOUBLE
#undef DATATYPE_STRING
#undef VALUE_ARBITRARY
#undef VALUE_ENUMERATION
#undef VALUE_LIST
#undef VALUE_NONE
#undef VALUE_RANGE
#undef VALUE_RANGE_MAX_INCLUSIVE
#undef VALUE_RANGE_MAX_INCLUSIVE_MASK
#undef VALUE_RANGE_MIN_INCLUSIVE
#undef VALUE_RANGE_MIN_INCLUSIVE_MASK
#undef VALUE_RANGE_MIN_MAX_INCLUSIVE

using $StandardMetadataFormat = ::com::sun::imageio::plugins::common::StandardMetadataFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl$Attribute = ::javax::imageio::metadata::IIOMetadataFormatImpl$Attribute;
using $IIOMetadataFormatImpl$Element = ::javax::imageio::metadata::IIOMetadataFormatImpl$Element;
using $IIOMetadataFormatImpl$ObjectValue = ::javax::imageio::metadata::IIOMetadataFormatImpl$ObjectValue;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormatImpl_FieldInfo_[] = {
	{"standardMetadataFormatName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IIOMetadataFormatImpl, standardMetadataFormatName)},
	{"standardFormat", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(IIOMetadataFormatImpl, standardFormat)},
	{"resourceBaseName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IIOMetadataFormatImpl, resourceBaseName)},
	{"rootName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IIOMetadataFormatImpl, rootName)},
	{"elementMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/imageio/metadata/IIOMetadataFormatImpl$Element;>;", $PRIVATE, $field(IIOMetadataFormatImpl, elementMap)},
	{}
};

$MethodInfo _IIOMetadataFormatImpl_MethodInfo_[] = {
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(IIOMetadataFormatImpl::*)($String*,int32_t)>(&IIOMetadataFormatImpl::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(IIOMetadataFormatImpl::*)($String*,int32_t,int32_t)>(&IIOMetadataFormatImpl::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;)V", nullptr, $PROTECTED},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PROTECTED},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PROTECTED},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;IZII)V", nullptr, $PROTECTED},
	{"addBooleanAttribute", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PROTECTED},
	{"addChildElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addElement", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PROTECTED},
	{"addElement", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"addObjectValue", "(Ljava/lang/String;Ljava/lang/Class;ZLjava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;ZTT;)V", $PROTECTED},
	{"addObjectValue", "(Ljava/lang/String;Ljava/lang/Class;ZLjava/lang/Object;Ljava/util/List;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;ZTT;Ljava/util/List<+TT;>;)V", $PROTECTED},
	{"addObjectValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;ZZ)V", "<T:Ljava/lang/Object;:Ljava/lang/Comparable<-TT;>;>(Ljava/lang/String;Ljava/lang/Class<TT;>;TT;Ljava/lang/Comparable<-TT;>;Ljava/lang/Comparable<-TT;>;ZZ)V", $PROTECTED},
	{"addObjectValue", "(Ljava/lang/String;Ljava/lang/Class;II)V", "(Ljava/lang/String;Ljava/lang/Class<*>;II)V", $PROTECTED},
	{"createStandardFormat", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&IIOMetadataFormatImpl::createStandardFormat))},
	{"getAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormatImpl$Attribute;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataFormatImpl$Attribute*(IIOMetadataFormatImpl::*)($String*,$String*)>(&IIOMetadataFormatImpl::getAttribute))},
	{"getAttributeDataType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAttributeDefaultValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeEnumerations", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeListMaxLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAttributeListMinLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAttributeMaxValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeMinValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValueType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getChildNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getChildPolicy", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getElement", "(Ljava/lang/String;Z)Ljavax/imageio/metadata/IIOMetadataFormatImpl$Element;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataFormatImpl$Element*(IIOMetadataFormatImpl::*)($String*,bool)>(&IIOMetadataFormatImpl::getElement))},
	{"getElement", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormatImpl$Element;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataFormatImpl$Element*(IIOMetadataFormatImpl::*)($String*)>(&IIOMetadataFormatImpl::getElement))},
	{"getElementDescription", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementMaxChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getElementMinChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getObjectArrayMaxLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getObjectArrayMinLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getObjectClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC},
	{"getObjectDefaultValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getObjectEnumerations", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getObjectMaxValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getObjectMinValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getObjectValue", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue;", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue<*>;", $PRIVATE, $method(static_cast<$IIOMetadataFormatImpl$ObjectValue*(IIOMetadataFormatImpl::*)($String*)>(&IIOMetadataFormatImpl::getObjectValue))},
	{"getObjectValueType", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getResource", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(IIOMetadataFormatImpl::*)($String*,$Locale*)>(&IIOMetadataFormatImpl::getResource))},
	{"getResourceBaseName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStandardFormatInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IIOMetadataFormat*(*)()>(&IIOMetadataFormatImpl::getStandardFormatInstance))},
	{"isAttributeRequired", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"removeElement", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"removeObjectValue", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setResourceBaseName", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _IIOMetadataFormatImpl_InnerClassesInfo_[] = {
	{"javax.imageio.metadata.IIOMetadataFormatImpl$ObjectValue", "javax.imageio.metadata.IIOMetadataFormatImpl", "ObjectValue", 0},
	{"javax.imageio.metadata.IIOMetadataFormatImpl$Attribute", "javax.imageio.metadata.IIOMetadataFormatImpl", "Attribute", 0},
	{"javax.imageio.metadata.IIOMetadataFormatImpl$Element", "javax.imageio.metadata.IIOMetadataFormatImpl", "Element", 0},
	{}
};

$ClassInfo _IIOMetadataFormatImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	"java.lang.Object",
	"javax.imageio.metadata.IIOMetadataFormat",
	_IIOMetadataFormatImpl_FieldInfo_,
	_IIOMetadataFormatImpl_MethodInfo_,
	nullptr,
	nullptr,
	_IIOMetadataFormatImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.metadata.IIOMetadataFormatImpl$ObjectValue,javax.imageio.metadata.IIOMetadataFormatImpl$Attribute,javax.imageio.metadata.IIOMetadataFormatImpl$Element"
};

$Object* allocate$IIOMetadataFormatImpl($Class* clazz) {
	return $of($alloc(IIOMetadataFormatImpl));
}

$String* IIOMetadataFormatImpl::standardMetadataFormatName = nullptr;
$IIOMetadataFormat* IIOMetadataFormatImpl::standardFormat = nullptr;

void IIOMetadataFormatImpl::init$($String* rootName, int32_t childPolicy) {
	$useLocalCurrentObjectStackCache();
	$set(this, resourceBaseName, $str({$($of(this)->getClass()->getName()), "Resources"_s}));
	$set(this, elementMap, $new($HashMap));
	if (rootName == nullptr) {
		$throwNew($IllegalArgumentException, "rootName == null!"_s);
	}
	if (childPolicy < $IIOMetadataFormat::CHILD_POLICY_EMPTY || childPolicy > $IIOMetadataFormat::CHILD_POLICY_MAX || childPolicy == $IIOMetadataFormat::CHILD_POLICY_REPEAT) {
		$throwNew($IllegalArgumentException, "Invalid value for childPolicy!"_s);
	}
	$set(this, rootName, rootName);
	$var($IIOMetadataFormatImpl$Element, root, $new($IIOMetadataFormatImpl$Element, this));
	$set(root, elementName, rootName);
	root->childPolicy = childPolicy;
	$nc(this->elementMap)->put(rootName, root);
}

void IIOMetadataFormatImpl::init$($String* rootName, int32_t minChildren, int32_t maxChildren) {
	$useLocalCurrentObjectStackCache();
	$set(this, resourceBaseName, $str({$($of(this)->getClass()->getName()), "Resources"_s}));
	$set(this, elementMap, $new($HashMap));
	if (rootName == nullptr) {
		$throwNew($IllegalArgumentException, "rootName == null!"_s);
	}
	if (minChildren < 0) {
		$throwNew($IllegalArgumentException, "minChildren < 0!"_s);
	}
	if (minChildren > maxChildren) {
		$throwNew($IllegalArgumentException, "minChildren > maxChildren!"_s);
	}
	$var($IIOMetadataFormatImpl$Element, root, $new($IIOMetadataFormatImpl$Element, this));
	$set(root, elementName, rootName);
	root->childPolicy = $IIOMetadataFormat::CHILD_POLICY_REPEAT;
	root->minChildren = minChildren;
	root->maxChildren = maxChildren;
	$set(this, rootName, rootName);
	$nc(this->elementMap)->put(rootName, root);
}

void IIOMetadataFormatImpl::setResourceBaseName($String* resourceBaseName) {
	if (resourceBaseName == nullptr) {
		$throwNew($IllegalArgumentException, "resourceBaseName == null!"_s);
	}
	$set(this, resourceBaseName, resourceBaseName);
}

$String* IIOMetadataFormatImpl::getResourceBaseName() {
	return this->resourceBaseName;
}

$IIOMetadataFormatImpl$Element* IIOMetadataFormatImpl::getElement($String* elementName, bool mustAppear) {
	$useLocalCurrentObjectStackCache();
	if (mustAppear && (elementName == nullptr)) {
		$throwNew($IllegalArgumentException, "element name is null!"_s);
	}
	$var($IIOMetadataFormatImpl$Element, element, $cast($IIOMetadataFormatImpl$Element, $nc(this->elementMap)->get(elementName)));
	if (mustAppear && (element == nullptr)) {
		$throwNew($IllegalArgumentException, $$str({"No such element: "_s, elementName}));
	}
	return element;
}

$IIOMetadataFormatImpl$Element* IIOMetadataFormatImpl::getElement($String* elementName) {
	return getElement(elementName, true);
}

$IIOMetadataFormatImpl$Attribute* IIOMetadataFormatImpl::getAttribute($String* elementName, $String* attrName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$Attribute, attr, $cast($IIOMetadataFormatImpl$Attribute, $nc($nc(element)->attrMap)->get(attrName)));
	if (attr == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute \""_s, attrName, "\"!"_s}));
	}
	return attr;
}

void IIOMetadataFormatImpl::addElement($String* elementName, $String* parentName, int32_t childPolicy) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, parent, getElement(parentName));
	if (childPolicy < $IIOMetadataFormat::CHILD_POLICY_EMPTY || childPolicy > $IIOMetadataFormat::CHILD_POLICY_MAX || childPolicy == $IIOMetadataFormat::CHILD_POLICY_REPEAT) {
		$throwNew($IllegalArgumentException, "Invalid value for childPolicy!"_s);
	}
	$var($IIOMetadataFormatImpl$Element, element, $new($IIOMetadataFormatImpl$Element, this));
	$set(element, elementName, elementName);
	element->childPolicy = childPolicy;
	$nc($nc(parent)->childList)->add(elementName);
	$nc(element->parentList)->add(parentName);
	$nc(this->elementMap)->put(elementName, element);
}

void IIOMetadataFormatImpl::addElement($String* elementName, $String* parentName, int32_t minChildren, int32_t maxChildren) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, parent, getElement(parentName));
	if (minChildren < 0) {
		$throwNew($IllegalArgumentException, "minChildren < 0!"_s);
	}
	if (minChildren > maxChildren) {
		$throwNew($IllegalArgumentException, "minChildren > maxChildren!"_s);
	}
	$var($IIOMetadataFormatImpl$Element, element, $new($IIOMetadataFormatImpl$Element, this));
	$set(element, elementName, elementName);
	element->childPolicy = $IIOMetadataFormat::CHILD_POLICY_REPEAT;
	element->minChildren = minChildren;
	element->maxChildren = maxChildren;
	$nc($nc(parent)->childList)->add(elementName);
	$nc(element->parentList)->add(parentName);
	$nc(this->elementMap)->put(elementName, element);
}

void IIOMetadataFormatImpl::addChildElement($String* elementName, $String* parentName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, parent, getElement(parentName));
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$nc($nc(parent)->childList)->add(elementName);
	$nc($nc(element)->parentList)->add(parentName);
}

void IIOMetadataFormatImpl::removeElement($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName, false));
	if (element != nullptr) {
		{
			$var($Iterator, i$, $nc(element->parentList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, parentName, $cast($String, i$->next()));
				{
					$var($IIOMetadataFormatImpl$Element, parent, getElement(parentName, false));
					if (parent != nullptr) {
						$nc(parent->childList)->remove($of(elementName));
					}
				}
			}
		}
		$nc(this->elementMap)->remove(elementName);
	}
}

void IIOMetadataFormatImpl::addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (attrName == nullptr) {
		$throwNew($IllegalArgumentException, "attrName == null!"_s);
	}
	if (dataType < $IIOMetadataFormat::DATATYPE_STRING || dataType > $IIOMetadataFormat::DATATYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Invalid value for dataType!"_s);
	}
	$var($IIOMetadataFormatImpl$Attribute, attr, $new($IIOMetadataFormatImpl$Attribute, this));
	$set(attr, attrName, attrName);
	attr->valueType = $IIOMetadataFormat::VALUE_ARBITRARY;
	attr->dataType = dataType;
	attr->required = required;
	$set(attr, defaultValue, defaultValue);
	$nc($nc(element)->attrList)->add(attrName);
	$nc(element->attrMap)->put(attrName, attr);
}

void IIOMetadataFormatImpl::addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue, $List* enumeratedValues) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (attrName == nullptr) {
		$throwNew($IllegalArgumentException, "attrName == null!"_s);
	}
	if (dataType < $IIOMetadataFormat::DATATYPE_STRING || dataType > $IIOMetadataFormat::DATATYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Invalid value for dataType!"_s);
	}
	if (enumeratedValues == nullptr) {
		$throwNew($IllegalArgumentException, "enumeratedValues == null!"_s);
	}
	if ($nc(enumeratedValues)->size() == 0) {
		$throwNew($IllegalArgumentException, "enumeratedValues is empty!"_s);
	}
	{
		$var($Iterator, i$, $nc(enumeratedValues)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				if (o == nullptr) {
					$throwNew($IllegalArgumentException, "enumeratedValues contains a null!"_s);
				}
				if (!($instanceOf($String, o))) {
					$throwNew($IllegalArgumentException, "enumeratedValues contains a non-String value!"_s);
				}
			}
		}
	}
	$var($IIOMetadataFormatImpl$Attribute, attr, $new($IIOMetadataFormatImpl$Attribute, this));
	$set(attr, attrName, attrName);
	attr->valueType = $IIOMetadataFormat::VALUE_ENUMERATION;
	attr->dataType = dataType;
	attr->required = required;
	$set(attr, defaultValue, defaultValue);
	$set(attr, enumeratedValues, enumeratedValues);
	$nc($nc(element)->attrList)->add(attrName);
	$nc(element->attrMap)->put(attrName, attr);
}

void IIOMetadataFormatImpl::addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue, $String* minValue, $String* maxValue, bool minInclusive, bool maxInclusive) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (attrName == nullptr) {
		$throwNew($IllegalArgumentException, "attrName == null!"_s);
	}
	if (dataType < $IIOMetadataFormat::DATATYPE_STRING || dataType > $IIOMetadataFormat::DATATYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Invalid value for dataType!"_s);
	}
	$var($IIOMetadataFormatImpl$Attribute, attr, $new($IIOMetadataFormatImpl$Attribute, this));
	$set(attr, attrName, attrName);
	attr->valueType = $IIOMetadataFormat::VALUE_RANGE;
	if (minInclusive) {
		attr->valueType |= $IIOMetadataFormat::VALUE_RANGE_MIN_INCLUSIVE_MASK;
	}
	if (maxInclusive) {
		attr->valueType |= $IIOMetadataFormat::VALUE_RANGE_MAX_INCLUSIVE_MASK;
	}
	attr->dataType = dataType;
	attr->required = required;
	$set(attr, defaultValue, defaultValue);
	$set(attr, minValue, minValue);
	$set(attr, maxValue, maxValue);
	$nc($nc(element)->attrList)->add(attrName);
	$nc(element->attrMap)->put(attrName, attr);
}

void IIOMetadataFormatImpl::addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, int32_t listMinLength, int32_t listMaxLength) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (attrName == nullptr) {
		$throwNew($IllegalArgumentException, "attrName == null!"_s);
	}
	if (dataType < $IIOMetadataFormat::DATATYPE_STRING || dataType > $IIOMetadataFormat::DATATYPE_DOUBLE) {
		$throwNew($IllegalArgumentException, "Invalid value for dataType!"_s);
	}
	if (listMinLength < 0 || listMinLength > listMaxLength) {
		$throwNew($IllegalArgumentException, "Invalid list bounds!"_s);
	}
	$var($IIOMetadataFormatImpl$Attribute, attr, $new($IIOMetadataFormatImpl$Attribute, this));
	$set(attr, attrName, attrName);
	attr->valueType = $IIOMetadataFormat::VALUE_LIST;
	attr->dataType = dataType;
	attr->required = required;
	attr->listMinLength = listMinLength;
	attr->listMaxLength = listMaxLength;
	$nc($nc(element)->attrList)->add(attrName);
	$nc(element->attrMap)->put(attrName, attr);
}

void IIOMetadataFormatImpl::addBooleanAttribute($String* elementName, $String* attrName, bool hasDefaultValue, bool defaultValue) {
	$useLocalCurrentObjectStackCache();
	$var($List, values, $new($ArrayList));
	values->add("TRUE"_s);
	values->add("FALSE"_s);
	$var($String, dval, nullptr);
	if (hasDefaultValue) {
		$assign(dval, defaultValue ? "TRUE"_s : "FALSE"_s);
	}
	addAttribute(elementName, attrName, $IIOMetadataFormat::DATATYPE_BOOLEAN, true, dval, values);
}

void IIOMetadataFormatImpl::removeAttribute($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$nc($nc(element)->attrList)->remove($of(attrName));
	$nc(element->attrMap)->remove(attrName);
}

void IIOMetadataFormatImpl::addObjectValue($String* elementName, $Class* classType, bool required, Object$* defaultValue) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$ObjectValue, obj, $new($IIOMetadataFormatImpl$ObjectValue, this));
	obj->valueType = $IIOMetadataFormat::VALUE_ARBITRARY;
	$set(obj, classType, classType);
	$set(obj, defaultValue, defaultValue);
	$set($nc(element), objectValue, obj);
}

void IIOMetadataFormatImpl::addObjectValue($String* elementName, $Class* classType, bool required, Object$* defaultValue, $List* enumeratedValues) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (enumeratedValues == nullptr) {
		$throwNew($IllegalArgumentException, "enumeratedValues == null!"_s);
	}
	if ($nc(enumeratedValues)->size() == 0) {
		$throwNew($IllegalArgumentException, "enumeratedValues is empty!"_s);
	}
	{
		$var($Iterator, i$, $nc(enumeratedValues)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				if (o == nullptr) {
					$throwNew($IllegalArgumentException, "enumeratedValues contains a null!"_s);
				}
				if (!$nc(classType)->isInstance(o)) {
					$throwNew($IllegalArgumentException, "enumeratedValues contains a value not of class classType!"_s);
				}
			}
		}
	}
	$var($IIOMetadataFormatImpl$ObjectValue, obj, $new($IIOMetadataFormatImpl$ObjectValue, this));
	obj->valueType = $IIOMetadataFormat::VALUE_ENUMERATION;
	$set(obj, classType, classType);
	$set(obj, defaultValue, defaultValue);
	$set(obj, enumeratedValues, enumeratedValues);
	$set($nc(element), objectValue, obj);
}

void IIOMetadataFormatImpl::addObjectValue($String* elementName, $Class* classType, Object$* defaultValue, $Comparable* minValue, $Comparable* maxValue, bool minInclusive, bool maxInclusive) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$ObjectValue, obj, $new($IIOMetadataFormatImpl$ObjectValue, this));
	obj->valueType = $IIOMetadataFormat::VALUE_RANGE;
	if (minInclusive) {
		obj->valueType |= $IIOMetadataFormat::VALUE_RANGE_MIN_INCLUSIVE_MASK;
	}
	if (maxInclusive) {
		obj->valueType |= $IIOMetadataFormat::VALUE_RANGE_MAX_INCLUSIVE_MASK;
	}
	$set(obj, classType, classType);
	$set(obj, defaultValue, defaultValue);
	$set(obj, minValue, minValue);
	$set(obj, maxValue, maxValue);
	$set($nc(element), objectValue, obj);
}

void IIOMetadataFormatImpl::addObjectValue($String* elementName, $Class* classType, int32_t arrayMinLength, int32_t arrayMaxLength) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$ObjectValue, obj, $new($IIOMetadataFormatImpl$ObjectValue, this));
	obj->valueType = $IIOMetadataFormat::VALUE_LIST;
	$set(obj, classType, classType);
	obj->arrayMinLength = arrayMinLength;
	obj->arrayMaxLength = arrayMaxLength;
	$set($nc(element), objectValue, obj);
}

void IIOMetadataFormatImpl::removeObjectValue($String* elementName) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$set($nc(element), objectValue, nullptr);
}

$String* IIOMetadataFormatImpl::getRootName() {
	return this->rootName;
}

int32_t IIOMetadataFormatImpl::getElementMinChildren($String* elementName) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if ($nc(element)->childPolicy != $IIOMetadataFormat::CHILD_POLICY_REPEAT) {
		$throwNew($IllegalArgumentException, "Child policy not CHILD_POLICY_REPEAT!"_s);
	}
	return $nc(element)->minChildren;
}

int32_t IIOMetadataFormatImpl::getElementMaxChildren($String* elementName) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if ($nc(element)->childPolicy != $IIOMetadataFormat::CHILD_POLICY_REPEAT) {
		$throwNew($IllegalArgumentException, "Child policy not CHILD_POLICY_REPEAT!"_s);
	}
	return $nc(element)->maxChildren;
}

$String* IIOMetadataFormatImpl::getResource($String* key, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$beforeCallerSensitive();
	if (locale == nullptr) {
		$assign(locale, $Locale::getDefault());
	}
	try {
		$var($ResourceBundle, bundle, $ResourceBundle::getBundle(this->resourceBaseName, locale, $($of(this)->getClass()->getModule())));
		return $nc(bundle)->getString(key);
	} catch ($MissingResourceException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* IIOMetadataFormatImpl::getElementDescription($String* elementName, $Locale* locale) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	return getResource(elementName, locale);
}

int32_t IIOMetadataFormatImpl::getChildPolicy($String* elementName) {
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	return $nc(element)->childPolicy;
}

$StringArray* IIOMetadataFormatImpl::getChildNames($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if ($nc(element)->childPolicy == $IIOMetadataFormat::CHILD_POLICY_EMPTY) {
		return nullptr;
	}
	return $fcast($StringArray, $nc($nc(element)->childList)->toArray($$new($StringArray, 0)));
}

$StringArray* IIOMetadataFormatImpl::getAttributeNames($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($List, names, $nc(element)->attrList);
	$var($StringArray, result, $new($StringArray, $nc(names)->size()));
	return $fcast($StringArray, names->toArray(result));
}

int32_t IIOMetadataFormatImpl::getAttributeValueType($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	return $nc(attr)->valueType;
}

int32_t IIOMetadataFormatImpl::getAttributeDataType($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	return $nc(attr)->dataType;
}

bool IIOMetadataFormatImpl::isAttributeRequired($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	return $nc(attr)->required;
}

$String* IIOMetadataFormatImpl::getAttributeDefaultValue($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	return $nc(attr)->defaultValue;
}

$StringArray* IIOMetadataFormatImpl::getAttributeEnumerations($String* elementName, $String* attrName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	if ($nc(attr)->valueType != $IIOMetadataFormat::VALUE_ENUMERATION) {
		$throwNew($IllegalArgumentException, "Attribute not an enumeration!"_s);
	}
	$var($List, values, $nc(attr)->enumeratedValues);
	$var($StringArray, result, $new($StringArray, $nc(values)->size()));
	return $fcast($StringArray, values->toArray(result));
}

$String* IIOMetadataFormatImpl::getAttributeMinValue($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	if ($nc(attr)->valueType != $IIOMetadataFormat::VALUE_RANGE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MIN_INCLUSIVE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MAX_INCLUSIVE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MIN_MAX_INCLUSIVE) {
		$throwNew($IllegalArgumentException, "Attribute not a range!"_s);
	}
	return $nc(attr)->minValue;
}

$String* IIOMetadataFormatImpl::getAttributeMaxValue($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	if ($nc(attr)->valueType != $IIOMetadataFormat::VALUE_RANGE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MIN_INCLUSIVE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MAX_INCLUSIVE && attr->valueType != $IIOMetadataFormat::VALUE_RANGE_MIN_MAX_INCLUSIVE) {
		$throwNew($IllegalArgumentException, "Attribute not a range!"_s);
	}
	return $nc(attr)->maxValue;
}

int32_t IIOMetadataFormatImpl::getAttributeListMinLength($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	if ($nc(attr)->valueType != $IIOMetadataFormat::VALUE_LIST) {
		$throwNew($IllegalArgumentException, "Attribute not a list!"_s);
	}
	return $nc(attr)->listMinLength;
}

int32_t IIOMetadataFormatImpl::getAttributeListMaxLength($String* elementName, $String* attrName) {
	$var($IIOMetadataFormatImpl$Attribute, attr, getAttribute(elementName, attrName));
	if ($nc(attr)->valueType != $IIOMetadataFormat::VALUE_LIST) {
		$throwNew($IllegalArgumentException, "Attribute not a list!"_s);
	}
	return $nc(attr)->listMaxLength;
}

$String* IIOMetadataFormatImpl::getAttributeDescription($String* elementName, $String* attrName, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	if (attrName == nullptr) {
		$throwNew($IllegalArgumentException, "attrName == null!"_s);
	}
	$var($IIOMetadataFormatImpl$Attribute, attr, $cast($IIOMetadataFormatImpl$Attribute, $nc($nc(element)->attrMap)->get(attrName)));
	if (attr == nullptr) {
		$throwNew($IllegalArgumentException, "No such attribute!"_s);
	}
	$var($String, key, $str({elementName, "/"_s, attrName}));
	return getResource(key, locale);
}

$IIOMetadataFormatImpl$ObjectValue* IIOMetadataFormatImpl::getObjectValue($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$ObjectValue, objv, $nc(element)->objectValue);
	if (objv == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No object within element "_s, elementName, "!"_s}));
	}
	return objv;
}

int32_t IIOMetadataFormatImpl::getObjectValueType($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$Element, element, getElement(elementName));
	$var($IIOMetadataFormatImpl$ObjectValue, objv, $nc(element)->objectValue);
	if (objv == nullptr) {
		return $IIOMetadataFormat::VALUE_NONE;
	}
	return $nc(objv)->valueType;
}

$Class* IIOMetadataFormatImpl::getObjectClass($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	return $nc(objv)->classType;
}

$Object* IIOMetadataFormatImpl::getObjectDefaultValue($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	return $of($nc(objv)->defaultValue);
}

$ObjectArray* IIOMetadataFormatImpl::getObjectEnumerations($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	if ($nc(objv)->valueType != $IIOMetadataFormat::VALUE_ENUMERATION) {
		$throwNew($IllegalArgumentException, "Not an enumeration!"_s);
	}
	$var($List, vlist, $nc(objv)->enumeratedValues);
	$var($ObjectArray, values, $new($ObjectArray, $nc(vlist)->size()));
	return vlist->toArray(values);
}

$Comparable* IIOMetadataFormatImpl::getObjectMinValue($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	if (((int32_t)($nc(objv)->valueType & (uint32_t)$IIOMetadataFormat::VALUE_RANGE)) != $IIOMetadataFormat::VALUE_RANGE) {
		$throwNew($IllegalArgumentException, "Not a range!"_s);
	}
	return $nc(objv)->minValue;
}

$Comparable* IIOMetadataFormatImpl::getObjectMaxValue($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	if (((int32_t)($nc(objv)->valueType & (uint32_t)$IIOMetadataFormat::VALUE_RANGE)) != $IIOMetadataFormat::VALUE_RANGE) {
		$throwNew($IllegalArgumentException, "Not a range!"_s);
	}
	return $nc(objv)->maxValue;
}

int32_t IIOMetadataFormatImpl::getObjectArrayMinLength($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	if ($nc(objv)->valueType != $IIOMetadataFormat::VALUE_LIST) {
		$throwNew($IllegalArgumentException, "Not a list!"_s);
	}
	return $nc(objv)->arrayMinLength;
}

int32_t IIOMetadataFormatImpl::getObjectArrayMaxLength($String* elementName) {
	$var($IIOMetadataFormatImpl$ObjectValue, objv, getObjectValue(elementName));
	if ($nc(objv)->valueType != $IIOMetadataFormat::VALUE_LIST) {
		$throwNew($IllegalArgumentException, "Not a list!"_s);
	}
	return $nc(objv)->arrayMaxLength;
}

void IIOMetadataFormatImpl::createStandardFormat() {
	$load(IIOMetadataFormatImpl);
	$synchronized(class$) {
		$init(IIOMetadataFormatImpl);
		if (IIOMetadataFormatImpl::standardFormat == nullptr) {
			$assignStatic(IIOMetadataFormatImpl::standardFormat, $new($StandardMetadataFormat));
		}
	}
}

$IIOMetadataFormat* IIOMetadataFormatImpl::getStandardFormatInstance() {
	$init(IIOMetadataFormatImpl);
	createStandardFormat();
	return IIOMetadataFormatImpl::standardFormat;
}

void clinit$IIOMetadataFormatImpl($Class* class$) {
	$assignStatic(IIOMetadataFormatImpl::standardMetadataFormatName, "javax_imageio_1.0"_s);
	$assignStatic(IIOMetadataFormatImpl::standardFormat, nullptr);
}

IIOMetadataFormatImpl::IIOMetadataFormatImpl() {
}

$Class* IIOMetadataFormatImpl::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormatImpl, name, initialize, &_IIOMetadataFormatImpl_ClassInfo_, clinit$IIOMetadataFormatImpl, allocate$IIOMetadataFormatImpl);
	return class$;
}

$Class* IIOMetadataFormatImpl::class$ = nullptr;

		} // metadata
	} // imageio
} // javax