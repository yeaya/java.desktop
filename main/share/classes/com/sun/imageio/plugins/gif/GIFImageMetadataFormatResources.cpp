#include <com/sun/imageio/plugins/gif/GIFImageMetadataFormatResources.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$MethodInfo _GIFImageMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageMetadataFormatResources::*)()>(&GIFImageMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GIFImageMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_GIFImageMetadataFormatResources_MethodInfo_
};

$Object* allocate$GIFImageMetadataFormatResources($Class* clazz) {
	return $of($alloc(GIFImageMetadataFormatResources));
}

void GIFImageMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* GIFImageMetadataFormatResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ImageDescriptor"_s),
			$of("The image descriptor"_s)
		}),
		$$new($ObjectArray, {
			$of("LocalColorTable"_s),
			$of("The local color table"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry"_s),
			$of("A local color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension"_s),
			$of("A graphic control extension"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension"_s),
			$of("A plain text (text grid) extension"_s)
		}),
		$$new($ObjectArray, {
			$of("ApplicationExtensions"_s),
			$of("A set of application extensions"_s)
		}),
		$$new($ObjectArray, {
			$of("ApplicationExtension"_s),
			$of("An application extension"_s)
		}),
		$$new($ObjectArray, {
			$of("CommentExtensions"_s),
			$of("A set of comments"_s)
		}),
		$$new($ObjectArray, {
			$of("CommentExtension"_s),
			$of("A comment"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageDescriptor/imageLeftPosition"_s),
			$of("The X offset of the image relative to the screen origin"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageDescriptor/imageTopPosition"_s),
			$of("The Y offset of the image relative to the screen origin"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageDescriptor/imageWidth"_s),
			$of("The width of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageDescriptor/imageHeight"_s),
			$of("The height of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageDescriptor/interlaceFlag"_s),
			$of("True if the image is stored using interlacing"_s)
		}),
		$$new($ObjectArray, {
			$of("LocalColorTable/sizeOfLocalColorTable"_s),
			$of("The number of entries in the local color table"_s)
		}),
		$$new($ObjectArray, {
			$of("LocalColorTable/sortFlag"_s),
			$of("True if the local color table is sorted by frequency"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/index"_s),
			$of("The index of the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/red"_s),
			$of("The red value for the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/green"_s),
			$of("The green value for the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/blue"_s),
			$of("The blue value for the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension/disposalMethod"_s),
			$of("The disposal method for this frame"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension/userInputFlag"_s),
			$of("True if the frame should be advanced based on user input"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension/transparentColorFlag"_s),
			$of("True if a transparent color exists"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension/delayTime"_s),
			$of("The time to delay between frames, in hundredths of a second"_s)
		}),
		$$new($ObjectArray, {
			$of("GraphicControlExtension/transparentColorIndex"_s),
			$of("The transparent color, if transparentColorFlag is true"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textGridLeft"_s),
			$of("The X offset of the text grid"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textGridTop"_s),
			$of("The Y offset of the text grid"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textGridWidth"_s),
			$of("The number of columns in the text grid"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textGridHeight"_s),
			$of("The number of rows in the text grid"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/characterCellWidth"_s),
			$of("The width of a character cell"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/characterCellHeight"_s),
			$of("The height of a character cell"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textForegroundColor"_s),
			$of("The text foreground color index"_s)
		}),
		$$new($ObjectArray, {
			$of("PlainTextExtension/textBackgroundColor"_s),
			$of("The text background color index"_s)
		}),
		$$new($ObjectArray, {
			$of("ApplicationExtension/applicationID"_s),
			$of("The application ID"_s)
		}),
		$$new($ObjectArray, {
			$of("ApplicationExtension/authenticationCode"_s),
			$of("The authentication code"_s)
		}),
		$$new($ObjectArray, {
			$of("CommentExtension/value"_s),
			$of("The comment"_s)
		})
	});
}

GIFImageMetadataFormatResources::GIFImageMetadataFormatResources() {
}

$Class* GIFImageMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(GIFImageMetadataFormatResources, name, initialize, &_GIFImageMetadataFormatResources_ClassInfo_, allocate$GIFImageMetadataFormatResources);
	return class$;
}

$Class* GIFImageMetadataFormatResources::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com