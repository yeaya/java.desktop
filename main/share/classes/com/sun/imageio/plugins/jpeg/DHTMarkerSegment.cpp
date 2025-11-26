#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef DHT

using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $DHTMarkerSegment$Htable = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment$Htable;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _DHTMarkerSegment_FieldInfo_[] = {
	{"tables", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable;>;", 0, $field(DHTMarkerSegment, tables)},
	{}
};

$MethodInfo _DHTMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment::*)(bool)>(&DHTMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment::*)($JPEGBuffer*)>(&DHTMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "([Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment::*)($JPEGHuffmanTableArray*,$JPEGHuffmanTableArray*)>(&DHTMarkerSegment::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(DHTMarkerSegment::*)($Node*)>(&DHTMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"addHtable", "(Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;ZI)V", nullptr, 0},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getHtableFromNode", "(Lorg/w3c/dom/Node;)Lcom/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable;", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DHTMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.DHTMarkerSegment$Htable", "com.sun.imageio.plugins.jpeg.DHTMarkerSegment", "Htable", 0},
	{}
};

$ClassInfo _DHTMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.DHTMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_DHTMarkerSegment_FieldInfo_,
	_DHTMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_DHTMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.DHTMarkerSegment$Htable"
};

$Object* allocate$DHTMarkerSegment($Class* clazz) {
	return $of($alloc(DHTMarkerSegment));
}

void DHTMarkerSegment::init$(bool needFour) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$($JPEG::DHT);
	$set(this, tables, $new($ArrayList));
	$init($JPEGHuffmanTable);
	$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, $JPEGHuffmanTable::StdDCLuminance, true, 0));
	if (needFour) {
		$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, $JPEGHuffmanTable::StdDCChrominance, true, 1));
	}
	$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, $JPEGHuffmanTable::StdACLuminance, false, 0));
	if (needFour) {
		$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, $JPEGHuffmanTable::StdACChrominance, false, 1));
	}
}

void DHTMarkerSegment::init$($JPEGBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$(buffer);
	$set(this, tables, $new($ArrayList));
	int32_t count = this->length;
	while (count > 0) {
		$var($DHTMarkerSegment$Htable, newGuy, $new($DHTMarkerSegment$Htable, this, buffer));
		$nc(this->tables)->add(newGuy);
		count -= 1 + 16 + $nc(newGuy->values)->length;
	}
	$nc(buffer)->bufAvail -= this->length;
}

void DHTMarkerSegment::init$($JPEGHuffmanTableArray* dcTables, $JPEGHuffmanTableArray* acTables) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$($JPEG::DHT);
	$set(this, tables, $new($ArrayList));
	for (int32_t i = 0; i < $nc(dcTables)->length; ++i) {
		$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, dcTables->get(i), true, i));
	}
	for (int32_t i = 0; i < $nc(acTables)->length; ++i) {
		$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, acTables->get(i), false, i));
	}
}

void DHTMarkerSegment::init$($Node* node) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$($JPEG::DHT);
	$set(this, tables, $new($ArrayList));
	$var($NodeList, children, $nc(node)->getChildNodes());
	int32_t size = $nc(children)->getLength();
	if ((size < 1) || (size > 4)) {
		$throwNew($IIOInvalidTreeException, "Invalid DHT node"_s, node);
	}
	for (int32_t i = 0; i < size; ++i) {
		$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, $(children->item(i))));
	}
}

$Object* DHTMarkerSegment::clone() {
	$useLocalCurrentObjectStackCache();
	$var(DHTMarkerSegment, newGuy, $cast(DHTMarkerSegment, $MarkerSegment::clone()));
	$set($nc(newGuy), tables, $new($ArrayList, $nc(this->tables)->size()));
	{
		$var($Iterator, i$, $nc(this->tables)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DHTMarkerSegment$Htable, table, $cast($DHTMarkerSegment$Htable, i$->next()));
			{
				$nc(newGuy->tables)->add($cast($DHTMarkerSegment$Htable, $($nc(table)->clone())));
			}
		}
	}
	return $of(newGuy);
}

$IIOMetadataNode* DHTMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dht"_s));
	for (int32_t i = 0; i < $nc(this->tables)->size(); ++i) {
		$var($DHTMarkerSegment$Htable, table, $cast($DHTMarkerSegment$Htable, $nc(this->tables)->get(i)));
		node->appendChild($($nc(table)->getNativeNode()));
	}
	return node;
}

void DHTMarkerSegment::write($ImageOutputStream* ios) {
}

void DHTMarkerSegment::print() {
	$useLocalCurrentObjectStackCache();
	printTag("DHT"_s);
	$nc($System::out)->println($$str({"Num tables: "_s, $($Integer::toString($nc(this->tables)->size()))}));
	for (int32_t i = 0; i < $nc(this->tables)->size(); ++i) {
		$var($DHTMarkerSegment$Htable, table, $cast($DHTMarkerSegment$Htable, $nc(this->tables)->get(i)));
		$nc(table)->print();
	}
	$nc($System::out)->println();
}

$DHTMarkerSegment$Htable* DHTMarkerSegment::getHtableFromNode($Node* node) {
	return $new($DHTMarkerSegment$Htable, this, node);
}

void DHTMarkerSegment::addHtable($JPEGHuffmanTable* table, bool isDC, int32_t id) {
	$nc(this->tables)->add($$new($DHTMarkerSegment$Htable, this, table, isDC, id));
}

DHTMarkerSegment::DHTMarkerSegment() {
}

$Class* DHTMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(DHTMarkerSegment, name, initialize, &_DHTMarkerSegment_ClassInfo_, allocate$DHTMarkerSegment);
	return class$;
}

$Class* DHTMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com