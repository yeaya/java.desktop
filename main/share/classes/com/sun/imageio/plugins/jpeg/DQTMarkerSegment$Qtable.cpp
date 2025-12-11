#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable.h>

#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DEFAULT_QUALITY
#undef QTABLE_SIZE

using $DQTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
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
using $IIOException = ::javax::imageio::IIOException;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _DQTMarkerSegment$Qtable_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(DQTMarkerSegment$Qtable, this$0)},
	{"elementPrecision", "I", nullptr, 0, $field(DQTMarkerSegment$Qtable, elementPrecision)},
	{"tableID", "I", nullptr, 0, $field(DQTMarkerSegment$Qtable, tableID)},
	{"QTABLE_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(DQTMarkerSegment$Qtable, QTABLE_SIZE)},
	{"data", "[I", nullptr, 0, $field(DQTMarkerSegment$Qtable, data)},
	{"zigzag", "[I", nullptr, $PRIVATE | $FINAL, $field(DQTMarkerSegment$Qtable, zigzag)},
	{}
};

$MethodInfo _DQTMarkerSegment$Qtable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment;ZF)V", nullptr, 0, $method(static_cast<void(DQTMarkerSegment$Qtable::*)($DQTMarkerSegment*,bool,float)>(&DQTMarkerSegment$Qtable::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(DQTMarkerSegment$Qtable::*)($DQTMarkerSegment*,$JPEGBuffer*)>(&DQTMarkerSegment$Qtable::init$)), "javax.imageio.IIOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment;Ljavax/imageio/plugins/jpeg/JPEGQTable;I)V", nullptr, 0, $method(static_cast<void(DQTMarkerSegment$Qtable::*)($DQTMarkerSegment*,$JPEGQTable*,int32_t)>(&DQTMarkerSegment$Qtable::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(DQTMarkerSegment$Qtable::*)($DQTMarkerSegment*,$Node*)>(&DQTMarkerSegment$Qtable::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _DQTMarkerSegment$Qtable_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.DQTMarkerSegment$Qtable", "com.sun.imageio.plugins.jpeg.DQTMarkerSegment", "Qtable", 0},
	{}
};

$ClassInfo _DQTMarkerSegment$Qtable_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.DQTMarkerSegment$Qtable",
	"java.lang.Object",
	"java.lang.Cloneable",
	_DQTMarkerSegment$Qtable_FieldInfo_,
	_DQTMarkerSegment$Qtable_MethodInfo_,
	nullptr,
	nullptr,
	_DQTMarkerSegment$Qtable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.DQTMarkerSegment"
};

$Object* allocate$DQTMarkerSegment$Qtable($Class* clazz) {
	return $of($alloc(DQTMarkerSegment$Qtable));
}

void DQTMarkerSegment$Qtable::init$($DQTMarkerSegment* this$0, bool wantLuma, float quality) {
	$set(this, this$0, this$0);
	$set(this, zigzag, $new($ints, {
		0,
		1,
		5,
		6,
		14,
		15,
		27,
		28,
		2,
		4,
		7,
		13,
		16,
		26,
		29,
		42,
		3,
		8,
		12,
		17,
		25,
		30,
		41,
		43,
		9,
		11,
		18,
		24,
		31,
		40,
		44,
		53,
		10,
		19,
		23,
		32,
		39,
		45,
		52,
		54,
		20,
		22,
		33,
		38,
		46,
		51,
		55,
		60,
		21,
		34,
		37,
		47,
		50,
		56,
		59,
		61,
		35,
		36,
		48,
		49,
		57,
		58,
		62,
		63
	}));
	this->elementPrecision = 0;
	$var($JPEGQTable, base, nullptr);
	if (wantLuma) {
		this->tableID = 0;
		$init($JPEGQTable);
		$assign(base, $JPEGQTable::K1Div2Luminance);
	} else {
		this->tableID = 1;
		$init($JPEGQTable);
		$assign(base, $JPEGQTable::K2Div2Chrominance);
	}
	$init($JPEG);
	if (quality != $JPEG::DEFAULT_QUALITY) {
		quality = $JPEG::convertToLinearQuality(quality);
		if (wantLuma) {
			$init($JPEGQTable);
			$assign(base, $nc($JPEGQTable::K1Luminance)->getScaledInstance(quality, true));
		} else {
			$init($JPEGQTable);
			$assign(base, $nc($JPEGQTable::K2Div2Chrominance)->getScaledInstance(quality, true));
		}
	}
	$set(this, data, $nc(base)->getTable());
}

void DQTMarkerSegment$Qtable::init$($DQTMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	$set(this, zigzag, $new($ints, {
		0,
		1,
		5,
		6,
		14,
		15,
		27,
		28,
		2,
		4,
		7,
		13,
		16,
		26,
		29,
		42,
		3,
		8,
		12,
		17,
		25,
		30,
		41,
		43,
		9,
		11,
		18,
		24,
		31,
		40,
		44,
		53,
		10,
		19,
		23,
		32,
		39,
		45,
		52,
		54,
		20,
		22,
		33,
		38,
		46,
		51,
		55,
		60,
		21,
		34,
		37,
		47,
		50,
		56,
		59,
		61,
		35,
		36,
		48,
		49,
		57,
		58,
		62,
		63
	}));
	this->elementPrecision = (int32_t)((uint32_t)$nc($nc(buffer)->buf)->get(buffer->bufPtr) >> 4);
	this->tableID = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)15);
	if (this->elementPrecision != 0) {
		$throwNew($IIOException, "Unsupported element precision"_s);
	}
	$set(this, data, $new($ints, DQTMarkerSegment$Qtable::QTABLE_SIZE));
	for (int32_t i = 0; i < DQTMarkerSegment$Qtable::QTABLE_SIZE; ++i) {
		$nc(this->data)->set(i, (int32_t)($nc(buffer->buf)->get(buffer->bufPtr + $nc(this->zigzag)->get(i)) & (uint32_t)255));
	}
	buffer->bufPtr += DQTMarkerSegment$Qtable::QTABLE_SIZE;
}

void DQTMarkerSegment$Qtable::init$($DQTMarkerSegment* this$0, $JPEGQTable* table, int32_t id) {
	$set(this, this$0, this$0);
	$set(this, zigzag, $new($ints, {
		0,
		1,
		5,
		6,
		14,
		15,
		27,
		28,
		2,
		4,
		7,
		13,
		16,
		26,
		29,
		42,
		3,
		8,
		12,
		17,
		25,
		30,
		41,
		43,
		9,
		11,
		18,
		24,
		31,
		40,
		44,
		53,
		10,
		19,
		23,
		32,
		39,
		45,
		52,
		54,
		20,
		22,
		33,
		38,
		46,
		51,
		55,
		60,
		21,
		34,
		37,
		47,
		50,
		56,
		59,
		61,
		35,
		36,
		48,
		49,
		57,
		58,
		62,
		63
	}));
	this->elementPrecision = 0;
	this->tableID = id;
	$set(this, data, $nc(table)->getTable());
}

void DQTMarkerSegment$Qtable::init$($DQTMarkerSegment* this$0, $Node* node) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, zigzag, $new($ints, {
		0,
		1,
		5,
		6,
		14,
		15,
		27,
		28,
		2,
		4,
		7,
		13,
		16,
		26,
		29,
		42,
		3,
		8,
		12,
		17,
		25,
		30,
		41,
		43,
		9,
		11,
		18,
		24,
		31,
		40,
		44,
		53,
		10,
		19,
		23,
		32,
		39,
		45,
		52,
		54,
		20,
		22,
		33,
		38,
		46,
		51,
		55,
		60,
		21,
		34,
		37,
		47,
		50,
		56,
		59,
		61,
		35,
		36,
		48,
		49,
		57,
		58,
		62,
		63
	}));
	if ($nc($($nc(node)->getNodeName()))->equals("dqtable"_s)) {
		$var($NamedNodeMap, attrs, node->getAttributes());
		int32_t count = $nc(attrs)->getLength();
		if ((count < 1) || (count > 2)) {
			$throwNew($IIOInvalidTreeException, "dqtable node must have 1 or 2 attributes"_s, node);
		}
		this->elementPrecision = 0;
		this->tableID = $MarkerSegment::getAttributeValue(node, attrs, "qtableId"_s, 0, 3, true);
		if ($instanceOf($IIOMetadataNode, node)) {
			$var($IIOMetadataNode, ourNode, $cast($IIOMetadataNode, node));
			$var($JPEGQTable, table, $cast($JPEGQTable, ourNode->getUserObject()));
			if (table == nullptr) {
				$throwNew($IIOInvalidTreeException, "dqtable node must have user object"_s, node);
			}
			$set(this, data, $nc(table)->getTable());
		} else {
			$throwNew($IIOInvalidTreeException, "dqtable node must have user object"_s, node);
		}
	} else {
		$throwNew($IIOInvalidTreeException, "Invalid node, expected dqtable"_s, node);
	}
}

$Object* DQTMarkerSegment$Qtable::clone() {
	$var(DQTMarkerSegment$Qtable, newGuy, nullptr);
	try {
		$assign(newGuy, $cast(DQTMarkerSegment$Qtable, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& e) {
	}
	if (this->data != nullptr) {
		$set($nc(newGuy), data, $cast($ints, $nc(this->data)->clone()));
	}
	return $of(newGuy);
}

$IIOMetadataNode* DQTMarkerSegment$Qtable::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dqtable"_s));
	node->setAttribute("elementPrecision"_s, $($Integer::toString(this->elementPrecision)));
	node->setAttribute("qtableId"_s, $($Integer::toString(this->tableID)));
	node->setUserObject($$new($JPEGQTable, this->data));
	return node;
}

void DQTMarkerSegment$Qtable::print() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"Table id: "_s, $($Integer::toString(this->tableID))}));
	$nc($System::out)->println($$str({"Element precision: "_s, $($Integer::toString(this->elementPrecision))}));
	($$new($JPEGQTable, this->data))->toString();
}

DQTMarkerSegment$Qtable::DQTMarkerSegment$Qtable() {
}

$Class* DQTMarkerSegment$Qtable::load$($String* name, bool initialize) {
	$loadClass(DQTMarkerSegment$Qtable, name, initialize, &_DQTMarkerSegment$Qtable_ClassInfo_, allocate$DQTMarkerSegment$Qtable);
	return class$;
}

$Class* DQTMarkerSegment$Qtable::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com