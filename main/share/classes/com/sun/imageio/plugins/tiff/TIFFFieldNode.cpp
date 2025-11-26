#include <com/sun/imageio/plugins/tiff/TIFFFieldNode.h>

#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef FALSE
#undef TIFF_IFD_POINTER
#undef TIFF_LONG
#undef TIFF_UNDEFINED
#undef TRUE

using $TIFFFieldArray = $Array<::javax::imageio::plugins::tiff::TIFFField>;
using $TIFFTagSetArray = $Array<::javax::imageio::plugins::tiff::TIFFTagSet>;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFFieldNode_FieldInfo_[] = {
	{"isIFD", "Z", nullptr, $PRIVATE, $field(TIFFFieldNode, isIFD$)},
	{"isInitialized", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(TIFFFieldNode, isInitialized)},
	{"field", "Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PRIVATE, $field(TIFFFieldNode, field)},
	{}
};

$MethodInfo _TIFFFieldNode_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFField;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFFieldNode::*)($TIFFField*)>(&TIFFFieldNode::init$))},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNodeName", "(Ljavax/imageio/plugins/tiff/TIFFField;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($TIFFField*)>(&TIFFFieldNode::getNodeName))},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(TIFFFieldNode::*)()>(&TIFFFieldNode::initialize))},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"isIFD", "(Ljavax/imageio/plugins/tiff/TIFFField;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($TIFFField*)>(&TIFFFieldNode::isIFD))},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFFieldNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFFieldNode",
	"javax.imageio.metadata.IIOMetadataNode",
	nullptr,
	_TIFFFieldNode_FieldInfo_,
	_TIFFFieldNode_MethodInfo_
};

$Object* allocate$TIFFFieldNode($Class* clazz) {
	return $of($alloc(TIFFFieldNode));
}

bool TIFFFieldNode::isIFD($TIFFField* f) {
	$init(TIFFFieldNode);
	int32_t type = $nc(f)->getType();
	return f->hasDirectory() && (type == $TIFFTag::TIFF_LONG || type == $TIFFTag::TIFF_IFD_POINTER);
}

$String* TIFFFieldNode::getNodeName($TIFFField* f) {
	$init(TIFFFieldNode);
	return isIFD(f) ? "TIFFIFD"_s : "TIFFField"_s;
}

void TIFFFieldNode::init$($TIFFField* field) {
	$useLocalCurrentObjectStackCache();
	$IIOMetadataNode::init$($(getNodeName(field)));
	$init($Boolean);
	$set(this, isInitialized, $Boolean::FALSE);
	this->isIFD$ = isIFD(field);
	$set(this, field, field);
	$var($TIFFTag, tag, $nc(field)->getTag());
	int32_t tagNumber = $nc(tag)->getNumber();
	$var($String, tagName, tag->getName());
	if (this->isIFD$) {
		if (tagNumber != 0) {
			setAttribute("parentTagNumber"_s, $($Integer::toString(tagNumber)));
		}
		if (tagName != nullptr) {
			setAttribute("parentTagName"_s, tagName);
		}
		$var($TIFFDirectory, dir, field->hasDirectory() ? field->getDirectory() : $cast($TIFFDirectory, field->getData()));
		$var($TIFFTagSetArray, tagSets, $nc(dir)->getTagSets());
		if (tagSets != nullptr) {
			$var($StringBuilder, tagSetNames, $new($StringBuilder));
			for (int32_t i = 0; i < tagSets->length; ++i) {
				tagSetNames->append($($nc($of(tagSets->get(i)))->getClass()->getName()));
				if (i != tagSets->length - 1) {
					tagSetNames->append(","_s);
				}
			}
			setAttribute("tagSets"_s, $(tagSetNames->toString()));
		}
	} else {
		setAttribute("number"_s, $($Integer::toString(tagNumber)));
		setAttribute("name"_s, tagName);
	}
}

void TIFFFieldNode::initialize() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc((this->isInitialized))->booleanValue()) {
			return;
		}
		if (this->isIFD$) {
			$var($TIFFDirectory, dir, $nc(this->field)->hasDirectory() ? $nc(this->field)->getDirectory() : $cast($TIFFDirectory, $nc(this->field)->getData()));
			$var($TIFFFieldArray, fields, $nc(dir)->getTIFFFields());
			if (fields != nullptr) {
				$var($TIFFTagSetArray, tagSets, dir->getTagSets());
				$var($List, tagSetList, $Arrays::asList(tagSets));
				int32_t numFields = fields->length;
				for (int32_t i = 0; i < numFields; ++i) {
					$var($TIFFField, f, fields->get(i));
					int32_t tagNumber = $nc(f)->getTagNumber();
					$var($TIFFTag, tag, $TIFFIFD::getTag(tagNumber, tagSetList));
					$var($Node, node, f->getAsNativeNode());
					if (node != nullptr) {
						appendChild(node);
					}
				}
			}
		} else {
			$var($IIOMetadataNode, child, nullptr);
			int32_t count = $nc(this->field)->getCount();
			if ($nc(this->field)->getType() == $TIFFTag::TIFF_UNDEFINED) {
				$assign(child, $new($IIOMetadataNode, "TIFFUndefined"_s));
				$var($bytes, data, $nc(this->field)->getAsBytes());
				$var($StringBuilder, sb, $new($StringBuilder));
				for (int32_t i = 0; i < count; ++i) {
					sb->append((int32_t)($nc(data)->get(i) & (uint32_t)255));
					if (i < count - 1) {
						sb->append(","_s);
					}
				}
				child->setAttribute("value"_s, $(sb->toString()));
			} else {
				$assign(child, $new($IIOMetadataNode, $$str({"TIFF"_s, $($TIFFField::getTypeName($nc(this->field)->getType())), "s"_s})));
				$var($TIFFTag, tag, $nc(this->field)->getTag());
				for (int32_t i = 0; i < count; ++i) {
					$var($IIOMetadataNode, cchild, $new($IIOMetadataNode, $$str({"TIFF"_s, $($TIFFField::getTypeName($nc(this->field)->getType()))})));
					cchild->setAttribute("value"_s, $($nc(this->field)->getValueAsString(i)));
					bool var$0 = $nc(tag)->hasValueNames();
					if (var$0 && $nc(this->field)->isIntegral()) {
						int32_t value = $nc(this->field)->getAsInt(i);
						$var($String, name, tag->getValueName(value));
						if (name != nullptr) {
							cchild->setAttribute("description"_s, name);
						}
					}
					child->appendChild(cchild);
				}
			}
			appendChild(child);
		}
		$set(this, isInitialized, $Boolean::TRUE);
	}
}

$Node* TIFFFieldNode::appendChild($Node* newChild) {
	if (newChild == nullptr) {
		$throwNew($NullPointerException, "newChild == null!"_s);
	}
	return $IIOMetadataNode::insertBefore(newChild, nullptr);
}

bool TIFFFieldNode::hasChildNodes() {
	initialize();
	return $IIOMetadataNode::hasChildNodes();
}

int32_t TIFFFieldNode::getLength() {
	initialize();
	return $IIOMetadataNode::getLength();
}

$Node* TIFFFieldNode::getFirstChild() {
	initialize();
	return $IIOMetadataNode::getFirstChild();
}

$Node* TIFFFieldNode::getLastChild() {
	initialize();
	return $IIOMetadataNode::getLastChild();
}

$Node* TIFFFieldNode::getPreviousSibling() {
	initialize();
	return $IIOMetadataNode::getPreviousSibling();
}

$Node* TIFFFieldNode::getNextSibling() {
	initialize();
	return $IIOMetadataNode::getNextSibling();
}

$Node* TIFFFieldNode::insertBefore($Node* newChild, $Node* refChild) {
	initialize();
	return $IIOMetadataNode::insertBefore(newChild, refChild);
}

$Node* TIFFFieldNode::replaceChild($Node* newChild, $Node* oldChild) {
	initialize();
	return $IIOMetadataNode::replaceChild(newChild, oldChild);
}

$Node* TIFFFieldNode::removeChild($Node* oldChild) {
	initialize();
	return $IIOMetadataNode::removeChild(oldChild);
}

$Node* TIFFFieldNode::cloneNode(bool deep) {
	initialize();
	return $IIOMetadataNode::cloneNode(deep);
}

TIFFFieldNode::TIFFFieldNode() {
}

$Class* TIFFFieldNode::load$($String* name, bool initialize) {
	$loadClass(TIFFFieldNode, name, initialize, &_TIFFFieldNode_ClassInfo_, allocate$TIFFFieldNode);
	return class$;
}

$Class* TIFFFieldNode::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com