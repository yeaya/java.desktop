#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable.h>

#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NUM_LENGTHS

using $DHTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _DHTMarkerSegment$Htable_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(DHTMarkerSegment$Htable, this$0)},
	{"tableClass", "I", nullptr, 0, $field(DHTMarkerSegment$Htable, tableClass)},
	{"tableID", "I", nullptr, 0, $field(DHTMarkerSegment$Htable, tableID)},
	{"NUM_LENGTHS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DHTMarkerSegment$Htable, NUM_LENGTHS)},
	{"numCodes", "[S", nullptr, 0, $field(DHTMarkerSegment$Htable, numCodes)},
	{"values", "[S", nullptr, 0, $field(DHTMarkerSegment$Htable, values)},
	{}
};

$MethodInfo _DHTMarkerSegment$Htable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment$Htable::*)($DHTMarkerSegment*,$JPEGBuffer*)>(&DHTMarkerSegment$Htable::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment;Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;ZI)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment$Htable::*)($DHTMarkerSegment*,$JPEGHuffmanTable*,bool,int32_t)>(&DHTMarkerSegment$Htable::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment$Htable::*)($DHTMarkerSegment*,$Node*)>(&DHTMarkerSegment$Htable::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _DHTMarkerSegment$Htable_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.DHTMarkerSegment$Htable", "com.sun.imageio.plugins.jpeg.DHTMarkerSegment", "Htable", 0},
	{}
};

$ClassInfo _DHTMarkerSegment$Htable_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.DHTMarkerSegment$Htable",
	"java.lang.Object",
	"java.lang.Cloneable",
	_DHTMarkerSegment$Htable_FieldInfo_,
	_DHTMarkerSegment$Htable_MethodInfo_,
	nullptr,
	nullptr,
	_DHTMarkerSegment$Htable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.DHTMarkerSegment"
};

$Object* allocate$DHTMarkerSegment$Htable($Class* clazz) {
	return $of($alloc(DHTMarkerSegment$Htable));
}

void DHTMarkerSegment$Htable::init$($DHTMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	$set(this, numCodes, $new($shorts, DHTMarkerSegment$Htable::NUM_LENGTHS));
	this->tableClass = (int32_t)((uint32_t)$nc($nc(buffer)->buf)->get(buffer->bufPtr) >> 4);
	this->tableID = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)15);
	for (int32_t i = 0; i < DHTMarkerSegment$Htable::NUM_LENGTHS; ++i) {
		$nc(this->numCodes)->set(i, (int16_t)((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)));
	}
	int32_t numValues = 0;
	for (int32_t i = 0; i < DHTMarkerSegment$Htable::NUM_LENGTHS; ++i) {
		numValues += $nc(this->numCodes)->get(i);
	}
	$set(this, values, $new($shorts, numValues));
	for (int32_t i = 0; i < numValues; ++i) {
		$nc(this->values)->set(i, (int16_t)((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)));
	}
}

void DHTMarkerSegment$Htable::init$($DHTMarkerSegment* this$0, $JPEGHuffmanTable* table, bool isDC, int32_t id) {
	$set(this, this$0, this$0);
	$set(this, numCodes, $new($shorts, DHTMarkerSegment$Htable::NUM_LENGTHS));
	this->tableClass = isDC ? 0 : 1;
	this->tableID = id;
	$set(this, numCodes, $nc(table)->getLengths());
	$set(this, values, table->getValues());
}

void DHTMarkerSegment$Htable::init$($DHTMarkerSegment* this$0, $Node* node) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, numCodes, $new($shorts, DHTMarkerSegment$Htable::NUM_LENGTHS));
	if ($nc($($nc(node)->getNodeName()))->equals("dhtable"_s)) {
		$var($NamedNodeMap, attrs, node->getAttributes());
		int32_t count = $nc(attrs)->getLength();
		if (count != 2) {
			$throwNew($IIOInvalidTreeException, "dhtable node must have 2 attributes"_s, node);
		}
		this->tableClass = $MarkerSegment::getAttributeValue(node, attrs, "class"_s, 0, 1, true);
		this->tableID = $MarkerSegment::getAttributeValue(node, attrs, "htableId"_s, 0, 3, true);
		if ($instanceOf($IIOMetadataNode, node)) {
			$var($IIOMetadataNode, ourNode, $cast($IIOMetadataNode, node));
			$var($JPEGHuffmanTable, table, $cast($JPEGHuffmanTable, ourNode->getUserObject()));
			if (table == nullptr) {
				$throwNew($IIOInvalidTreeException, "dhtable node must have user object"_s, node);
			}
			$set(this, numCodes, $nc(table)->getLengths());
			$set(this, values, table->getValues());
		} else {
			$throwNew($IIOInvalidTreeException, "dhtable node must have user object"_s, node);
		}
	} else {
		$throwNew($IIOInvalidTreeException, "Invalid node, expected dqtable"_s, node);
	}
}

$Object* DHTMarkerSegment$Htable::clone() {
	$var(DHTMarkerSegment$Htable, newGuy, nullptr);
	try {
		$assign(newGuy, $cast(DHTMarkerSegment$Htable, $Cloneable::clone()));
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
	if (this->numCodes != nullptr) {
		$set($nc(newGuy), numCodes, $cast($shorts, $nc(this->numCodes)->clone()));
	}
	if (this->values != nullptr) {
		$set($nc(newGuy), values, $cast($shorts, $nc(this->values)->clone()));
	}
	return $of(newGuy);
}

$IIOMetadataNode* DHTMarkerSegment$Htable::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dhtable"_s));
	node->setAttribute("class"_s, $($Integer::toString(this->tableClass)));
	node->setAttribute("htableId"_s, $($Integer::toString(this->tableID)));
	node->setUserObject($$new($JPEGHuffmanTable, this->numCodes, this->values));
	return node;
}

void DHTMarkerSegment$Htable::print() {
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println("Huffman Table"_s);
	$nc($System::out)->println($$str({"table class: "_s, ((this->tableClass == 0) ? "DC"_s : "AC"_s)}));
	$nc($System::out)->println($$str({"table id: "_s, $($Integer::toString(this->tableID))}));
	($$new($JPEGHuffmanTable, this->numCodes, this->values))->toString();
}

DHTMarkerSegment$Htable::DHTMarkerSegment$Htable() {
}

$Class* DHTMarkerSegment$Htable::load$($String* name, bool initialize) {
	$loadClass(DHTMarkerSegment$Htable, name, initialize, &_DHTMarkerSegment$Htable_ClassInfo_, allocate$DHTMarkerSegment$Htable);
	return class$;
}

$Class* DHTMarkerSegment$Htable::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com