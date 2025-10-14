#include <javax/imageio/metadata/IIOMetadataFormatImpl$Element.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataFormatImpl$ObjectValue = ::javax::imageio::metadata::IIOMetadataFormatImpl$ObjectValue;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormatImpl$Element_FieldInfo_[] = {
	{"this$0", "Ljavax/imageio/metadata/IIOMetadataFormatImpl;", nullptr, $FINAL | $SYNTHETIC, $field(IIOMetadataFormatImpl$Element, this$0)},
	{"elementName", "Ljava/lang/String;", nullptr, 0, $field(IIOMetadataFormatImpl$Element, elementName)},
	{"childPolicy", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Element, childPolicy)},
	{"minChildren", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Element, minChildren)},
	{"maxChildren", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Element, maxChildren)},
	{"childList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(IIOMetadataFormatImpl$Element, childList)},
	{"parentList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(IIOMetadataFormatImpl$Element, parentList)},
	{"attrList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(IIOMetadataFormatImpl$Element, attrList)},
	{"attrMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/imageio/metadata/IIOMetadataFormatImpl$Attribute;>;", 0, $field(IIOMetadataFormatImpl$Element, attrMap)},
	{"objectValue", "Ljavax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue;", "Ljavax/imageio/metadata/IIOMetadataFormatImpl$ObjectValue<*>;", 0, $field(IIOMetadataFormatImpl$Element, objectValue)},
	{}
};

$MethodInfo _IIOMetadataFormatImpl$Element_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/metadata/IIOMetadataFormatImpl;)V", nullptr, 0, $method(static_cast<void(IIOMetadataFormatImpl$Element::*)($IIOMetadataFormatImpl*)>(&IIOMetadataFormatImpl$Element::init$))},
	{}
};

$InnerClassInfo _IIOMetadataFormatImpl$Element_InnerClassesInfo_[] = {
	{"javax.imageio.metadata.IIOMetadataFormatImpl$Element", "javax.imageio.metadata.IIOMetadataFormatImpl", "Element", 0},
	{}
};

$ClassInfo _IIOMetadataFormatImpl$Element_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIOMetadataFormatImpl$Element",
	"java.lang.Object",
	nullptr,
	_IIOMetadataFormatImpl$Element_FieldInfo_,
	_IIOMetadataFormatImpl$Element_MethodInfo_,
	nullptr,
	nullptr,
	_IIOMetadataFormatImpl$Element_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.metadata.IIOMetadataFormatImpl"
};

$Object* allocate$IIOMetadataFormatImpl$Element($Class* clazz) {
	return $of($alloc(IIOMetadataFormatImpl$Element));
}

void IIOMetadataFormatImpl$Element::init$($IIOMetadataFormatImpl* this$0) {
	$set(this, this$0, this$0);
	this->minChildren = 0;
	this->maxChildren = 0;
	$set(this, childList, $new($ArrayList));
	$set(this, parentList, $new($ArrayList));
	$set(this, attrList, $new($ArrayList));
	$set(this, attrMap, $new($HashMap));
}

IIOMetadataFormatImpl$Element::IIOMetadataFormatImpl$Element() {
}

$Class* IIOMetadataFormatImpl$Element::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormatImpl$Element, name, initialize, &_IIOMetadataFormatImpl$Element_ClassInfo_, allocate$IIOMetadataFormatImpl$Element);
	return class$;
}

$Class* IIOMetadataFormatImpl$Element::class$ = nullptr;

		} // metadata
	} // imageio
} // javax