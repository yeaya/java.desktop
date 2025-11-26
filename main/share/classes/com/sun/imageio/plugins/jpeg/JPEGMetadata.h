#ifndef _com_sun_imageio_plugins_jpeg_JPEGMetadata_h_
#define _com_sun_imageio_plugins_jpeg_JPEGMetadata_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGMetadata
//$ extends javax.imageio.metadata.IIOMetadata
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <javax/imageio/metadata/IIOMetadata.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class AdobeMarkerSegment;
					class COMMarkerSegment;
					class JPEGImageReader;
					class JPEGImageWriter;
					class MarkerSegment;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace color {
			class ICC_Profile;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
		class ImageWriteParam;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataNode;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
			class ImageOutputStream;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGMetadata : public ::javax::imageio::metadata::IIOMetadata, public ::java::lang::Cloneable {
	$class(JPEGMetadata, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadata, ::java::lang::Cloneable)
public:
	JPEGMetadata();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isStream, bool inThumb);
	void init$(bool isStream, bool isThumb, ::javax::imageio::stream::ImageInputStream* iis, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	void init$(::javax::imageio::ImageWriteParam* param, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	void init$(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	virtual $Object* clone() override;
	::java::util::List* cloneSequence();
	int32_t countScanBands();
	static ::java::awt::Point* findIntegerRatio(float value);
	int32_t findLastUnknownMarkerSegmentPosition();
	virtual ::com::sun::imageio::plugins::jpeg::MarkerSegment* findMarkerSegment(int32_t tag);
	virtual ::com::sun::imageio::plugins::jpeg::MarkerSegment* findMarkerSegment($Class* cls, bool first);
	int32_t findMarkerSegmentPosition($Class* cls, bool first);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeTree();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode() override;
	void insertAdobeMarkerSegment(::com::sun::imageio::plugins::jpeg::AdobeMarkerSegment* newGuy);
	void insertCOMMarkerSegment(::com::sun::imageio::plugins::jpeg::COMMarkerSegment* newGuy);
	bool isConsistent();
	virtual bool isReadOnly() override;
	void mergeAdobeNode(::org::w3c::dom::Node* node);
	void mergeCOMNode(::org::w3c::dom::Node* node);
	void mergeDHTNode(::org::w3c::dom::Node* node);
	void mergeDQTNode(::org::w3c::dom::Node* node);
	void mergeDRINode(::org::w3c::dom::Node* node);
	void mergeJFIFsubtree(::org::w3c::dom::Node* JPEGvariety);
	void mergeNativeTree(::org::w3c::dom::Node* root);
	void mergeSOFNode(::org::w3c::dom::Node* node);
	void mergeSOSNode(::org::w3c::dom::Node* node);
	void mergeSequenceSubtree(::org::w3c::dom::Node* sequenceTree);
	void mergeStandardChromaNode(::org::w3c::dom::Node* node, ::org::w3c::dom::NodeList* siblings);
	void mergeStandardCompressionNode(::org::w3c::dom::Node* node);
	void mergeStandardDataNode(::org::w3c::dom::Node* node);
	void mergeStandardDimensionNode(::org::w3c::dom::Node* node);
	void mergeStandardDocumentNode(::org::w3c::dom::Node* node);
	void mergeStandardTextNode(::org::w3c::dom::Node* node);
	void mergeStandardTransparencyNode(::org::w3c::dom::Node* node);
	void mergeStandardTree(::org::w3c::dom::Node* root);
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	void mergeUnknownNode(::org::w3c::dom::Node* node);
	virtual void print();
	virtual void reset() override;
	virtual void setFromMarkerSequenceNode(::org::w3c::dom::Node* markerSequenceNode);
	void setFromNativeTree(::org::w3c::dom::Node* root);
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual $String* toString() override;
	bool wantAlpha(::org::w3c::dom::Node* transparency);
	virtual void writeToStream(::javax::imageio::stream::ImageOutputStream* ios, bool ignoreJFIF, bool forceJFIF, ::java::util::List* thumbnails, ::java::awt::color::ICC_Profile* iccProfile, bool ignoreAdobe, int32_t newAdobeTransform, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	static const bool debug = false;
	::java::util::List* resetSequence = nullptr;
	bool inThumb = false;
	bool hasAlpha = false;
	::java::util::List* markerSequence = nullptr;
	bool isStream = false;
	bool transparencyDone = false;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGMetadata_h_