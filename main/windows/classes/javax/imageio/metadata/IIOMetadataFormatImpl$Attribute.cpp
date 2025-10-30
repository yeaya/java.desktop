#include <javax/imageio/metadata/IIOMetadataFormatImpl$Attribute.h>

#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormatImpl$Attribute_FieldInfo_[] = {
	{"this$0", "Ljavax/imageio/metadata/IIOMetadataFormatImpl;", nullptr, $FINAL | $SYNTHETIC, $field(IIOMetadataFormatImpl$Attribute, this$0)},
	{"attrName", "Ljava/lang/String;", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, attrName)},
	{"valueType", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, valueType)},
	{"dataType", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, dataType)},
	{"required", "Z", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, required)},
	{"defaultValue", "Ljava/lang/String;", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, defaultValue)},
	{"enumeratedValues", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(IIOMetadataFormatImpl$Attribute, enumeratedValues)},
	{"minValue", "Ljava/lang/String;", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, minValue)},
	{"maxValue", "Ljava/lang/String;", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, maxValue)},
	{"listMinLength", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, listMinLength)},
	{"listMaxLength", "I", nullptr, 0, $field(IIOMetadataFormatImpl$Attribute, listMaxLength)},
	{}
};

$MethodInfo _IIOMetadataFormatImpl$Attribute_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/metadata/IIOMetadataFormatImpl;)V", nullptr, 0, $method(static_cast<void(IIOMetadataFormatImpl$Attribute::*)($IIOMetadataFormatImpl*)>(&IIOMetadataFormatImpl$Attribute::init$))},
	{}
};

$InnerClassInfo _IIOMetadataFormatImpl$Attribute_InnerClassesInfo_[] = {
	{"javax.imageio.metadata.IIOMetadataFormatImpl$Attribute", "javax.imageio.metadata.IIOMetadataFormatImpl", "Attribute", 0},
	{}
};

$ClassInfo _IIOMetadataFormatImpl$Attribute_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIOMetadataFormatImpl$Attribute",
	"java.lang.Object",
	nullptr,
	_IIOMetadataFormatImpl$Attribute_FieldInfo_,
	_IIOMetadataFormatImpl$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_IIOMetadataFormatImpl$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.metadata.IIOMetadataFormatImpl"
};

$Object* allocate$IIOMetadataFormatImpl$Attribute($Class* clazz) {
	return $of($alloc(IIOMetadataFormatImpl$Attribute));
}

void IIOMetadataFormatImpl$Attribute::init$($IIOMetadataFormatImpl* this$0) {
	$set(this, this$0, this$0);
	this->valueType = 1;
	$set(this, defaultValue, nullptr);
}

IIOMetadataFormatImpl$Attribute::IIOMetadataFormatImpl$Attribute() {
}

$Class* IIOMetadataFormatImpl$Attribute::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormatImpl$Attribute, name, initialize, &_IIOMetadataFormatImpl$Attribute_ClassInfo_, allocate$IIOMetadataFormatImpl$Attribute);
	return class$;
}

$Class* IIOMetadataFormatImpl$Attribute::class$ = nullptr;

		} // metadata
	} // imageio
} // javax