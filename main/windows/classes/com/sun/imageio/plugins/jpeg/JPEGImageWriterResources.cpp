#include <com/sun/imageio/plugins/jpeg/JPEGImageWriterResources.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef WARNING_DEST_IGNORED
#undef WARNING_DEST_METADATA_ADOBE_MISMATCH
#undef WARNING_DEST_METADATA_COMP_MISMATCH
#undef WARNING_DEST_METADATA_JFIF_MISMATCH
#undef WARNING_FORCING_JFIF
#undef WARNING_IGNORING_THUMBS
#undef WARNING_ILLEGAL_THUMBNAIL
#undef WARNING_IMAGE_METADATA_ADOBE_MISMATCH
#undef WARNING_IMAGE_METADATA_JFIF_MISMATCH
#undef WARNING_METADATA_ADJUSTED_FOR_THUMB
#undef WARNING_METADATA_NOT_JPEG_FOR_RASTER
#undef WARNING_NO_BANDS_ON_INDEXED
#undef WARNING_NO_GRAY_THUMB_AS_INDEXED
#undef WARNING_NO_RGB_THUMB_AS_INDEXED
#undef WARNING_STREAM_METADATA_IGNORED
#undef WARNING_THUMB_CLIPPED

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$MethodInfo _JPEGImageWriterResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageWriterResources::*)()>(&JPEGImageWriterResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _JPEGImageWriterResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriterResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_JPEGImageWriterResources_MethodInfo_
};

$Object* allocate$JPEGImageWriterResources($Class* clazz) {
	return $of($alloc(JPEGImageWriterResources));
}

void JPEGImageWriterResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* JPEGImageWriterResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_DEST_IGNORED))),
			$of("Only Rasters or band subsets may be written with a destination type. Destination type ignored."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_STREAM_METADATA_IGNORED))),
			$of("Stream metadata ignored on write"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_DEST_METADATA_COMP_MISMATCH))),
			$of("Metadata component ids incompatible with destination type. Metadata modified."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_DEST_METADATA_JFIF_MISMATCH))),
			$of("Metadata JFIF settings incompatible with destination type. Metadata modified."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_DEST_METADATA_ADOBE_MISMATCH))),
			$of("Metadata Adobe settings incompatible with destination type. Metadata modified."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_IMAGE_METADATA_JFIF_MISMATCH))),
			$of("Metadata JFIF settings incompatible with image type. Metadata modified."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_IMAGE_METADATA_ADOBE_MISMATCH))),
			$of("Metadata Adobe settings incompatible with image type. Metadata modified."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_METADATA_NOT_JPEG_FOR_RASTER))),
			$of("Metadata must be JPEGMetadata when writing a Raster. Metadata ignored."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_NO_BANDS_ON_INDEXED))),
			$of("Band subset not allowed for an IndexColorModel image.  Band subset ignored."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_ILLEGAL_THUMBNAIL))),
			$of("Thumbnails must be simple (possibly index) RGB or grayscale.  Incompatible thumbnail ignored."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_IGNORING_THUMBS))),
			$of("Thumbnails ignored for non-JFIF-compatible image."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_FORCING_JFIF))),
			$of("Thumbnails require JFIF marker segment.  Missing node added to metadata."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_THUMB_CLIPPED))),
			$of("Thumbnail clipped."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_METADATA_ADJUSTED_FOR_THUMB))),
			$of("Metadata adjusted (made JFIF-compatible) for thumbnail."_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_NO_RGB_THUMB_AS_INDEXED))),
			$of("RGB thumbnail can\'t be written as indexed.  Written as RGB"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageWriter::WARNING_NO_GRAY_THUMB_AS_INDEXED))),
			$of("Grayscale thumbnail can\'t be written as indexed.  Written as JPEG"_s)
		})
	});
}

JPEGImageWriterResources::JPEGImageWriterResources() {
}

$Class* JPEGImageWriterResources::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriterResources, name, initialize, &_JPEGImageWriterResources_ClassInfo_, allocate$JPEGImageWriterResources);
	return class$;
}

$Class* JPEGImageWriterResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com