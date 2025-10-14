#include <javax/imageio/metadata/IIOMetadataFormat.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef CHILD_POLICY_ALL
#undef CHILD_POLICY_CHOICE
#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_MAX
#undef CHILD_POLICY_REPEAT
#undef CHILD_POLICY_SEQUENCE
#undef CHILD_POLICY_SOME
#undef DATATYPE_BOOLEAN
#undef DATATYPE_DOUBLE
#undef DATATYPE_FLOAT
#undef DATATYPE_INTEGER
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

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormat_FieldInfo_[] = {
	{"CHILD_POLICY_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_EMPTY)},
	{"CHILD_POLICY_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_ALL)},
	{"CHILD_POLICY_SOME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_SOME)},
	{"CHILD_POLICY_CHOICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_CHOICE)},
	{"CHILD_POLICY_SEQUENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_SEQUENCE)},
	{"CHILD_POLICY_REPEAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_REPEAT)},
	{"CHILD_POLICY_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_MAX)},
	{"VALUE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_NONE)},
	{"VALUE_ARBITRARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_ARBITRARY)},
	{"VALUE_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE)},
	{"VALUE_RANGE_MIN_INCLUSIVE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_INCLUSIVE_MASK)},
	{"VALUE_RANGE_MAX_INCLUSIVE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MAX_INCLUSIVE_MASK)},
	{"VALUE_RANGE_MIN_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_INCLUSIVE)},
	{"VALUE_RANGE_MAX_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MAX_INCLUSIVE)},
	{"VALUE_RANGE_MIN_MAX_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_MAX_INCLUSIVE)},
	{"VALUE_ENUMERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_ENUMERATION)},
	{"VALUE_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_LIST)},
	{"DATATYPE_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_STRING)},
	{"DATATYPE_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_BOOLEAN)},
	{"DATATYPE_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_INTEGER)},
	{"DATATYPE_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_FLOAT)},
	{"DATATYPE_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_DOUBLE)},
	{}
};

$MethodInfo _IIOMetadataFormat_MethodInfo_[] = {
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeDataType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeDefaultValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeEnumerations", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeListMaxLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeListMinLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeMaxValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeMinValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeValueType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildPolicy", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementDescription", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementMaxChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementMinChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectArrayMaxLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectArrayMinLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getObjectDefaultValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectEnumerations", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectMaxValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT},
	{"getObjectMinValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT},
	{"getObjectValueType", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttributeRequired", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOMetadataFormat_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.metadata.IIOMetadataFormat",
	nullptr,
	nullptr,
	_IIOMetadataFormat_FieldInfo_,
	_IIOMetadataFormat_MethodInfo_
};

$Object* allocate$IIOMetadataFormat($Class* clazz) {
	return $of($alloc(IIOMetadataFormat));
}

$Class* IIOMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormat, name, initialize, &_IIOMetadataFormat_ClassInfo_, allocate$IIOMetadataFormat);
	return class$;
}

$Class* IIOMetadataFormat::class$ = nullptr;

		} // metadata
	} // imageio
} // javax