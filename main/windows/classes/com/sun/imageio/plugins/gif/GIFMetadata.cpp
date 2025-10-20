#include <com/sun/imageio/plugins/gif/GIFMetadata.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef UNDEFINED_INTEGER_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFMetadata_FieldInfo_[] = {
	{"UNDEFINED_INTEGER_VALUE", "I", nullptr, $STATIC | $FINAL, $constField(GIFMetadata, UNDEFINED_INTEGER_VALUE)},
	{}
};

$MethodInfo _GIFMetadata_MethodInfo_[] = {
	{"<init>", "(ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GIFMetadata::*)(bool,$String*,$String*,$StringArray*,$StringArray*)>(&GIFMetadata::init$))},
	{"fatal", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Node*,$String*)>(&GIFMetadata::fatal)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($Node*,$String*,$String*,bool)>(&GIFMetadata::getAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($Node*,$String*)>(&GIFMetadata::getAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getBooleanAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZZ)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($Node*,$String*,bool,bool)>(&GIFMetadata::getBooleanAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getBooleanAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($Node*,$String*)>(&GIFMetadata::getBooleanAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getColorTable", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZI)[B", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getEnumeratedAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;[Ljava/lang/String;IZ)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($Node*,$String*,$StringArray*,int32_t,bool)>(&GIFMetadata::getEnumeratedAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getEnumeratedAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;[Ljava/lang/String;)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($Node*,$String*,$StringArray*)>(&GIFMetadata::getEnumeratedAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getFloatAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;FZ)F", nullptr, $PROTECTED | $STATIC, $method(static_cast<float(*)($Node*,$String*,float,bool)>(&GIFMetadata::getFloatAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getFloatAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)F", nullptr, $PROTECTED | $STATIC, $method(static_cast<float(*)($Node*,$String*)>(&GIFMetadata::getFloatAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getIntAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;IZZII)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($Node*,$String*,int32_t,bool,bool,int32_t,int32_t)>(&GIFMetadata::getIntAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getIntAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZII)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($Node*,$String*,bool,int32_t,int32_t)>(&GIFMetadata::getIntAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getStringAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($Node*,$String*,$String*,bool,$StringArray*)>(&GIFMetadata::getStringAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{}
};

$ClassInfo _GIFMetadata_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.gif.GIFMetadata",
	"javax.imageio.metadata.IIOMetadata",
	nullptr,
	_GIFMetadata_FieldInfo_,
	_GIFMetadata_MethodInfo_
};

$Object* allocate$GIFMetadata($Class* clazz) {
	return $of($alloc(GIFMetadata));
}

void GIFMetadata::fatal($Node* node, $String* reason) {
	$init(GIFMetadata);
	$throwNew($IIOInvalidTreeException, reason, node);
}

$String* GIFMetadata::getStringAttribute($Node* node, $String* name, $String* defaultValue, bool required, $StringArray* range) {
	$init(GIFMetadata);
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	$var($String, value, $nc(attr)->getNodeValue());
	if (range != nullptr) {
		if (value == nullptr) {
			fatal(node, $$str({"Null value for "_s, $(node->getNodeName()), " attribute "_s, name, "!"_s}));
		}
		bool validValue = false;
		int32_t len = range->length;
		for (int32_t i = 0; i < len; ++i) {
			if ($nc(value)->equals(range->get(i))) {
				validValue = true;
				break;
			}
		}
		if (!validValue) {
			fatal(node, $$str({"Bad value for "_s, $(node->getNodeName()), " attribute "_s, name, "!"_s}));
		}
	}
	return value;
}

int32_t GIFMetadata::getIntAttribute($Node* node, $String* name, int32_t defaultValue, bool required, bool bounded, int32_t min, int32_t max) {
	$init(GIFMetadata);
	$useLocalCurrentObjectStackCache();
	$var($String, value, getStringAttribute(node, name, nullptr, required, nullptr));
	if (value == nullptr || $nc(value)->isEmpty()) {
		return defaultValue;
	}
	int32_t intValue = defaultValue;
	try {
		intValue = $Integer::parseInt(value);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		fatal(node, $$str({"Bad value for "_s, $($nc(node)->getNodeName()), " attribute "_s, name, "!"_s}));
	}
	if (bounded && (intValue < min || intValue > max)) {
		fatal(node, $$str({"Bad value for "_s, $($nc(node)->getNodeName()), " attribute "_s, name, "!"_s}));
	}
	return intValue;
}

float GIFMetadata::getFloatAttribute($Node* node, $String* name, float defaultValue, bool required) {
	$init(GIFMetadata);
	$var($String, value, getStringAttribute(node, name, nullptr, required, nullptr));
	if (value == nullptr) {
		return defaultValue;
	}
	return $Float::parseFloat(value);
}

int32_t GIFMetadata::getIntAttribute($Node* node, $String* name, bool bounded, int32_t min, int32_t max) {
	$init(GIFMetadata);
	return getIntAttribute(node, name, -1, true, bounded, min, max);
}

float GIFMetadata::getFloatAttribute($Node* node, $String* name) {
	$init(GIFMetadata);
	return getFloatAttribute(node, name, -1.0f, true);
}

bool GIFMetadata::getBooleanAttribute($Node* node, $String* name, bool defaultValue, bool required) {
	$init(GIFMetadata);
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	$var($String, value, $nc(attr)->getNodeValue());
	bool var$0 = $nc(value)->equals("TRUE"_s);
	if (var$0 || $nc(value)->equals("true"_s)) {
		return true;
	} else {
		bool var$2 = value->equals("FALSE"_s);
		if (var$2 || value->equals("false"_s)) {
			return false;
		} else {
			fatal(node, $$str({"Attribute "_s, name, " must be \'TRUE\' or \'FALSE\'!"_s}));
			return false;
		}
	}
}

bool GIFMetadata::getBooleanAttribute($Node* node, $String* name) {
	$init(GIFMetadata);
	return getBooleanAttribute(node, name, false, true);
}

int32_t GIFMetadata::getEnumeratedAttribute($Node* node, $String* name, $StringArray* legalNames, int32_t defaultValue, bool required) {
	$init(GIFMetadata);
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	$var($String, value, $nc(attr)->getNodeValue());
	for (int32_t i = 0; i < $nc(legalNames)->length; ++i) {
		if ($nc(value)->equals(legalNames->get(i))) {
			return i;
		}
	}
	fatal(node, $$str({"Illegal value for attribute "_s, name, "!"_s}));
	return -1;
}

int32_t GIFMetadata::getEnumeratedAttribute($Node* node, $String* name, $StringArray* legalNames) {
	$init(GIFMetadata);
	return getEnumeratedAttribute(node, name, legalNames, -1, true);
}

$String* GIFMetadata::getAttribute($Node* node, $String* name, $String* defaultValue, bool required) {
	$init(GIFMetadata);
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	return $nc(attr)->getNodeValue();
}

$String* GIFMetadata::getAttribute($Node* node, $String* name) {
	$init(GIFMetadata);
	return getAttribute(node, name, nullptr, true);
}

void GIFMetadata::init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames) {
	$IIOMetadata::init$(standardMetadataFormatSupported, nativeMetadataFormatName, nativeMetadataFormatClassName, extraMetadataFormatNames, extraMetadataFormatClassNames);
}

void GIFMetadata::mergeTree($String* formatName, $Node* root) {
	if ($nc(formatName)->equals(this->nativeMetadataFormatName)) {
		if (root == nullptr) {
			$throwNew($IllegalArgumentException, "root == null!"_s);
		}
		mergeNativeTree(root);
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			if (root == nullptr) {
				$throwNew($IllegalArgumentException, "root == null!"_s);
			}
			mergeStandardTree(root);
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

$bytes* GIFMetadata::getColorTable($Node* colorTableNode, $String* entryNodeName, bool lengthExpected, int32_t expectedLength) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, red, $new($bytes, 256));
	$var($bytes, green, $new($bytes, 256));
	$var($bytes, blue, $new($bytes, 256));
	int32_t maxIndex = -1;
	$var($Node, entry, $nc(colorTableNode)->getFirstChild());
	if (entry == nullptr) {
		fatal(colorTableNode, "Palette has no entries!"_s);
	}
	while (entry != nullptr) {
		if (!$nc($(entry->getNodeName()))->equals(entryNodeName)) {
			fatal(colorTableNode, $$str({"Only a "_s, entryNodeName, " may be a child of a "_s, $(entry->getNodeName()), "!"_s}));
		}
		int32_t index = getIntAttribute(entry, "index"_s, true, 0, 255);
		if (index > maxIndex) {
			maxIndex = index;
		}
		red->set(index, (int8_t)getIntAttribute(entry, "red"_s, true, 0, 255));
		green->set(index, (int8_t)getIntAttribute(entry, "green"_s, true, 0, 255));
		blue->set(index, (int8_t)getIntAttribute(entry, "blue"_s, true, 0, 255));
		$assign(entry, entry->getNextSibling());
	}
	int32_t numEntries = maxIndex + 1;
	if (lengthExpected && numEntries != expectedLength) {
		fatal(colorTableNode, "Unexpected length for palette!"_s);
	}
	$var($bytes, colorTable, $new($bytes, 3 * numEntries));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < numEntries; ++i) {
			colorTable->set(j++, red->get(i));
			colorTable->set(j++, green->get(i));
			colorTable->set(j++, blue->get(i));
		}
	}
	return colorTable;
}

GIFMetadata::GIFMetadata() {
}

$Class* GIFMetadata::load$($String* name, bool initialize) {
	$loadClass(GIFMetadata, name, initialize, &_GIFMetadata_ClassInfo_, allocate$GIFMetadata);
	return class$;
}

$Class* GIFMetadata::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com