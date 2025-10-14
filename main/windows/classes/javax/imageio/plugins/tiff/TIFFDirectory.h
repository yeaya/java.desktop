#ifndef _javax_imageio_plugins_tiff_TIFFDirectory_h_
#define _javax_imageio_plugins_tiff_TIFFDirectory_h_
//$ class javax.imageio.plugins.tiff.TIFFDirectory
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>

#pragma push_macro("MAX_LOW_FIELD_TAG_NUM")
#undef MAX_LOW_FIELD_TAG_NUM
#pragma push_macro("TAG_REFERENCE_BLACK_WHITE")
#undef TAG_REFERENCE_BLACK_WHITE

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFField;
				class TIFFTag;
				class TIFFTagSet;
			}
		}
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $export TIFFDirectory : public ::java::lang::Cloneable {
	$class(TIFFDirectory, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	TIFFDirectory();
	void init$($Array<::javax::imageio::plugins::tiff::TIFFTagSet>* tagSets, ::javax::imageio::plugins::tiff::TIFFTag* parentTag);
	virtual void addTIFFField(::javax::imageio::plugins::tiff::TIFFField* f);
	virtual void addTagSet(::javax::imageio::plugins::tiff::TIFFTagSet* tagSet);
	virtual ::javax::imageio::plugins::tiff::TIFFDirectory* clone() override;
	virtual bool containsTIFFField(int32_t tagNumber);
	static ::javax::imageio::plugins::tiff::TIFFDirectory* createFromMetadata(::javax::imageio::metadata::IIOMetadata* tiffImageMetadata);
	virtual ::javax::imageio::metadata::IIOMetadata* getAsMetadata();
	virtual int32_t getNumTIFFFields();
	virtual ::javax::imageio::plugins::tiff::TIFFTag* getParentTag();
	virtual ::javax::imageio::plugins::tiff::TIFFField* getTIFFField(int32_t tagNumber);
	virtual $Array<::javax::imageio::plugins::tiff::TIFFField>* getTIFFFields();
	virtual ::javax::imageio::plugins::tiff::TIFFTag* getTag(int32_t tagNumber);
	virtual $Array<::javax::imageio::plugins::tiff::TIFFTagSet>* getTagSets();
	virtual void removeTIFFField(int32_t tagNumber);
	virtual void removeTIFFFields();
	virtual void removeTagSet(::javax::imageio::plugins::tiff::TIFFTagSet* tagSet);
	static const int32_t MAX_LOW_FIELD_TAG_NUM = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE;
	::java::util::List* tagSets = nullptr;
	::javax::imageio::plugins::tiff::TIFFTag* parentTag = nullptr;
	$Array<::javax::imageio::plugins::tiff::TIFFField>* lowFields = nullptr;
	int32_t numLowFields = 0;
	::java::util::Map* highFields = nullptr;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("MAX_LOW_FIELD_TAG_NUM")
#pragma pop_macro("TAG_REFERENCE_BLACK_WHITE")

#endif // _javax_imageio_plugins_tiff_TIFFDirectory_h_