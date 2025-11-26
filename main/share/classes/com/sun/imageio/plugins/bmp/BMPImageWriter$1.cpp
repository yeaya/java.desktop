#include <com/sun/imageio/plugins/bmp/BMPImageWriter$1.h>

#include <com/sun/imageio/plugins/bmp/BMPImageWriter$IIOWriteProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $BMPImageWriter = ::com::sun::imageio::plugins::bmp::BMPImageWriter;
using $BMPImageWriter$IIOWriteProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageWriter$IIOWriteProgressAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageWriter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageWriter;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageWriter$1, this$0)},
	{}
};

$MethodInfo _BMPImageWriter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;)V", nullptr, 0, $method(static_cast<void(BMPImageWriter$1::*)($BMPImageWriter*)>(&BMPImageWriter$1::init$))},
	{"imageProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageWriter$1_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageWriter",
	"writeEmbedded",
	"(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V"
};

$InnerClassInfo _BMPImageWriter$1_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$1", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageWriter", "IIOWriteProgressAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BMPImageWriter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageWriter$1",
	"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter",
	nullptr,
	_BMPImageWriter$1_FieldInfo_,
	_BMPImageWriter$1_MethodInfo_,
	nullptr,
	&_BMPImageWriter$1_EnclosingMethodInfo_,
	_BMPImageWriter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageWriter"
};

$Object* allocate$BMPImageWriter$1($Class* clazz) {
	return $of($alloc(BMPImageWriter$1));
}

void BMPImageWriter$1::init$($BMPImageWriter* this$0) {
	$set(this, this$0, this$0);
	$BMPImageWriter$IIOWriteProgressAdapter::init$();
}

void BMPImageWriter$1::imageProgress($ImageWriter* source, float percentageDone) {
	$BMPImageWriter::access$000(this->this$0, percentageDone);
}

BMPImageWriter$1::BMPImageWriter$1() {
}

$Class* BMPImageWriter$1::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriter$1, name, initialize, &_BMPImageWriter$1_ClassInfo_, allocate$BMPImageWriter$1);
	return class$;
}

$Class* BMPImageWriter$1::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com