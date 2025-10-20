#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef MAX_JPEG_DATA_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGMetadataFormat_FieldInfo_[] = {
	{"MAX_JPEG_DATA_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGMetadataFormat, MAX_JPEG_DATA_SIZE)},
	{"resourceBaseName", "Ljava/lang/String;", nullptr, 0, $field(JPEGMetadataFormat, resourceBaseName)},
	{}
};

$MethodInfo _JPEGMetadataFormat_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(JPEGMetadataFormat::*)($String*,int32_t)>(&JPEGMetadataFormat::init$))},
	{"addStreamElements", "(Ljava/lang/String;)V", nullptr, 0},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"isInSubtree", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _JPEGMetadataFormat_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_JPEGMetadataFormat_FieldInfo_,
	_JPEGMetadataFormat_MethodInfo_
};

$Object* allocate$JPEGMetadataFormat($Class* clazz) {
	return $of($alloc(JPEGMetadataFormat));
}

void JPEGMetadataFormat::init$($String* formatName, int32_t childPolicy) {
	$IIOMetadataFormatImpl::init$(formatName, childPolicy);
	$set(this, resourceBaseName, $str({$($of(this)->getClass()->getName()), "Resources"_s}));
	setResourceBaseName(this->resourceBaseName);
}

void JPEGMetadataFormat::addStreamElements($String* parentName) {
	$useLocalCurrentObjectStackCache();
	addElement("dqt"_s, parentName, 1, 4);
	addElement("dqtable"_s, "dqt"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("dqtable"_s, "elementPrecision"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s);
	$var($List, tabids, $new($ArrayList));
	tabids->add("0"_s);
	tabids->add("1"_s);
	tabids->add("2"_s);
	tabids->add("3"_s);
	addAttribute("dqtable"_s, "qtableId"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, tabids);
	$load($JPEGQTable);
	addObjectValue("dqtable"_s, $JPEGQTable::class$, true, ($Object*)nullptr);
	addElement("dht"_s, parentName, 1, 4);
	addElement("dhtable"_s, "dht"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$var($List, classes, $new($ArrayList));
	classes->add("0"_s);
	classes->add("1"_s);
	addAttribute("dhtable"_s, "class"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, classes);
	addAttribute("dhtable"_s, "htableId"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, tabids);
	$load($JPEGHuffmanTable);
	addObjectValue("dhtable"_s, $JPEGHuffmanTable::class$, true, ($Object*)nullptr);
	addElement("dri"_s, parentName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("dri"_s, "interval"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addElement("com"_s, parentName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("com"_s, "comment"_s, $IIOMetadataFormat::DATATYPE_STRING, false, nullptr);
	$load($bytes);
	addObjectValue("com"_s, $getClass($bytes), 1, JPEGMetadataFormat::MAX_JPEG_DATA_SIZE);
	addElement("unknown"_s, parentName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("unknown"_s, "MarkerTag"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addObjectValue("unknown"_s, $getClass($bytes), 1, JPEGMetadataFormat::MAX_JPEG_DATA_SIZE);
}

bool JPEGMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	if (isInSubtree(elementName, $(getRootName()))) {
		return true;
	}
	return false;
}

bool JPEGMetadataFormat::isInSubtree($String* elementName, $String* subtreeName) {
	if ($nc(elementName)->equals(subtreeName)) {
		return true;
	}
	$var($StringArray, children, getChildNames(elementName));
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		if (isInSubtree(elementName, children->get(i))) {
			return true;
		}
	}
	return false;
}

JPEGMetadataFormat::JPEGMetadataFormat() {
}

$Class* JPEGMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(JPEGMetadataFormat, name, initialize, &_JPEGMetadataFormat_ClassInfo_, allocate$JPEGMetadataFormat);
	return class$;
}

$Class* JPEGMetadataFormat::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com