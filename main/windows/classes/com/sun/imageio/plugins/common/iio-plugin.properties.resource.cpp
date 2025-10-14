#include <com/sun/imageio/plugins/common/iio-plugin.properties.resource.h>

namespace com {
    namespace sun {
        namespace imageio {
            namespace plugins {
                namespace common {

const char iio$plugin$properties$resource$data[] =
"BMPImageReader0=Only one image exists in the stream.\n"
"BMPImageReader1=Invalid magic value for BMP file.\n"
"BMPImageReader2=Invalid compression specified in BMP stream.\n"
"BMPImageReader3=New BMP version not implemented yet.\n"
"BMPImageReader4=No ImageIO-style reader is found for\n"
"BMPImageReader5=Input has not been set.\n"
"BMPImageReader6=Unable to read the image header.\n"
"BMPImageReader7=Invalid bitmap offset.\n"
"BMPImageReader8=Invalid bits per pixel in image header.\n"
"BMPImageWriteParam0=Only versions 2-5 are supported.\n"
"BMPImageWriter0=Output is not an ImageOutputStream.\n"
"BMPImageWriter1=The image region to be encoded is empty.\n"
"BMPImageWriter2=Only 1 or 3 band image is encoded.\n"
"BMPImageWriter3=The maximum pixel size should be 32.\n"
"BMPImageWriter4=Only version 3 is supported.\n"
"BMPImageWriter5=No ImageIO-style writer is found for\n"
"BMPImageWriter6=Compression type BI_BITFIELDS should be used for 16 bpp or 32 bpp images only.\n"
"BMPImageWriter7=Output has not been set.\n"
"BMPImageWriter8=Image is null\\!\n"
"BMPMetadata0=The provided metadata format isn't recognized.\n"
"BMPMetadata1=Metadata is read-only.\n"
"GetNumImages0=Input has not been set.\n"
"GetNumImages1=seekForwardOnly and allowSearch cannot both be true.\n"
"ImageUtil0=The supplied Raster does not represent a binary data set.\n"
"ImageUtil1=The provided sample model is null.\n"
"ImageUtil2=The provided image cannot be encoded using\\:\n"
"WBMPImageReader0=Only one image exists in the stream.\n"
"WBMPImageReader1=Input has not been set.\n"
"WBMPImageReader2=Bad WBMP header.\n"
"WBMPImageWriter0=Output is not an ImageOutputStream.\n"
"WBMPImageWriter1=The image region to be encoded is empty.\n"
"WBMPImageWriter2=Only integral single-band bilevel image is supported.\n"
"WBMPImageWriter3=Output has not been set.\n"
"WBMPImageWriter4=Image is null\\!\n"
"WBMPMetadata0=The provided metadata format isn't recognized.\n"
"WBMPMetadata1=Metadata is read-only.\n";

int8_t* iio$plugin$properties$resource::get(int32_t& length) {
    length = sizeof(iio$plugin$properties$resource$data) - 1;
    return (int8_t*)iio$plugin$properties$resource$data;
}

                } // common
            } // plugins
        } // imageio
    } // sun
} // com
