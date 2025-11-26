#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/util/ArrayList.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef APP2
#undef ID_SIZE

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $IIOException = ::javax::imageio::IIOException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$ICCMarkerSegment_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$ICCMarkerSegment, this$0)},
	{"chunks", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[B>;", 0, $field(JFIFMarkerSegment$ICCMarkerSegment, chunks)},
	{"profile", "[B", nullptr, 0, $field(JFIFMarkerSegment$ICCMarkerSegment, profile)},
	{"ID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment$ICCMarkerSegment, ID_SIZE)},
	{"chunksRead", "I", nullptr, 0, $field(JFIFMarkerSegment$ICCMarkerSegment, chunksRead)},
	{"numChunks", "I", nullptr, 0, $field(JFIFMarkerSegment$ICCMarkerSegment, numChunks)},
	{}
};

$MethodInfo _JFIFMarkerSegment$ICCMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/color/ICC_ColorSpace;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$ICCMarkerSegment::*)($JFIFMarkerSegment*,$ICC_ColorSpace*)>(&JFIFMarkerSegment$ICCMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$ICCMarkerSegment::*)($JFIFMarkerSegment*,$JPEGBuffer*)>(&JFIFMarkerSegment$ICCMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$ICCMarkerSegment::*)($JFIFMarkerSegment*,$Node*)>(&JFIFMarkerSegment$ICCMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"addData", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$ICCMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$ICCMarkerSegment", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "ICCMarkerSegment", 0},
	{}
};

$ClassInfo _JFIFMarkerSegment$ICCMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$ICCMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_JFIFMarkerSegment$ICCMarkerSegment_FieldInfo_,
	_JFIFMarkerSegment$ICCMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$ICCMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$ICCMarkerSegment($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$ICCMarkerSegment));
}

void JFIFMarkerSegment$ICCMarkerSegment::init$($JFIFMarkerSegment* this$0, $ICC_ColorSpace* cs) {
	$set(this, this$0, this$0);
	$MarkerSegment::init$($JPEG::APP2);
	$set(this, chunks, nullptr);
	$set(this, profile, nullptr);
	$set(this, chunks, nullptr);
	this->chunksRead = 0;
	this->numChunks = 0;
	$set(this, profile, $nc($($nc(cs)->getProfile()))->getData());
}

void JFIFMarkerSegment$ICCMarkerSegment::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	$MarkerSegment::init$(buffer);
	$set(this, chunks, nullptr);
	$set(this, profile, nullptr);
	$nc(buffer)->bufPtr += JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	buffer->bufAvail -= JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	this->length -= JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	int32_t chunkNum = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr) & (uint32_t)255);
	this->numChunks = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr + 1) & (uint32_t)255);
	if (chunkNum > this->numChunks) {
		$throwNew($IIOException, "Image format Error; chunk num > num chunks"_s);
	}
	if (this->numChunks == 1) {
		this->length -= 2;
		$set(this, profile, $new($bytes, this->length));
		buffer->bufPtr += 2;
		buffer->bufAvail -= 2;
		buffer->readData(this->profile);
		this$0->inICC = false;
	} else {
		$var($bytes, profileData, $new($bytes, this->length));
		this->length -= 2;
		buffer->readData(profileData);
		$set(this, chunks, $new($ArrayList));
		$nc(this->chunks)->add(profileData);
		this->chunksRead = 1;
		this$0->inICC = true;
	}
}

void JFIFMarkerSegment$ICCMarkerSegment::init$($JFIFMarkerSegment* this$0, $Node* node) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$MarkerSegment::init$($JPEG::APP2);
	$set(this, chunks, nullptr);
	$set(this, profile, nullptr);
	if ($instanceOf($IIOMetadataNode, node)) {
		$var($IIOMetadataNode, ourNode, $cast($IIOMetadataNode, node));
		$var($ICC_Profile, prof, $cast($ICC_Profile, $nc(ourNode)->getUserObject()));
		if (prof != nullptr) {
			$set(this, profile, prof->getData());
		}
	}
}

$Object* JFIFMarkerSegment$ICCMarkerSegment::clone() {
	$var(JFIFMarkerSegment$ICCMarkerSegment, newGuy, $cast(JFIFMarkerSegment$ICCMarkerSegment, $MarkerSegment::clone()));
	if (this->profile != nullptr) {
		$set($nc(newGuy), profile, $cast($bytes, $nc(this->profile)->clone()));
	}
	return $of(newGuy);
}

bool JFIFMarkerSegment$ICCMarkerSegment::addData($JPEGBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	++$nc(buffer)->bufPtr;
	--buffer->bufAvail;
	int32_t dataLen = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	dataLen |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	buffer->bufAvail -= 2;
	dataLen -= 2;
	buffer->bufPtr += JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	buffer->bufAvail -= JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	dataLen -= JFIFMarkerSegment$ICCMarkerSegment::ID_SIZE;
	int32_t chunkNum = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr) & (uint32_t)255);
	if (chunkNum > this->numChunks) {
		$throwNew($IIOException, "Image format Error; chunk num > num chunks"_s);
	}
	int32_t newNumChunks = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr + 1) & (uint32_t)255);
	if (this->numChunks != newNumChunks) {
		$throwNew($IIOException, "Image format Error; icc num chunks mismatch"_s);
	}
	dataLen -= 2;
	bool retval = false;
	$var($bytes, profileData, $new($bytes, dataLen));
	buffer->readData(profileData);
	$nc(this->chunks)->add(profileData);
	this->length += dataLen;
	++this->chunksRead;
	if (this->chunksRead < this->numChunks) {
		this->this$0->inICC = true;
	} else {
		$set(this, profile, $new($bytes, this->length));
		int32_t index = 0;
		for (int32_t i = 1; i <= this->numChunks; ++i) {
			bool foundIt = false;
			for (int32_t chunk = 0; chunk < $nc(this->chunks)->size(); ++chunk) {
				$var($bytes, chunkData, $cast($bytes, $nc(this->chunks)->get(chunk)));
				if ($nc(chunkData)->get(0) == i) {
					$System::arraycopy(chunkData, 2, this->profile, index, chunkData->length - 2);
					index += chunkData->length - 2;
					foundIt = true;
				}
			}
			if (foundIt == false) {
				$throwNew($IIOException, $$str({"Image Format Error: Missing ICC chunk num "_s, $$str(i)}));
			}
		}
		$set(this, chunks, nullptr);
		this->chunksRead = 0;
		this->numChunks = 0;
		this->this$0->inICC = false;
		retval = true;
	}
	return retval;
}

$IIOMetadataNode* JFIFMarkerSegment$ICCMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "app2ICC"_s));
	if (this->profile != nullptr) {
		node->setUserObject($($ICC_Profile::getInstance(this->profile)));
	}
	return node;
}

void JFIFMarkerSegment$ICCMarkerSegment::write($ImageOutputStream* ios) {
}

void JFIFMarkerSegment$ICCMarkerSegment::print() {
	printTag("ICC Profile APP2"_s);
}

JFIFMarkerSegment$ICCMarkerSegment::JFIFMarkerSegment$ICCMarkerSegment() {
}

$Class* JFIFMarkerSegment$ICCMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$ICCMarkerSegment, name, initialize, &_JFIFMarkerSegment$ICCMarkerSegment_ClassInfo_, allocate$JFIFMarkerSegment$ICCMarkerSegment);
	return class$;
}

$Class* JFIFMarkerSegment$ICCMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com