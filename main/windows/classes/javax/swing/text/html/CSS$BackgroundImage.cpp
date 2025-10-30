#include <javax/swing/text/html/CSS$BackgroundImage.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/net/URL.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageIcon = ::javax::swing::ImageIcon;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$BackgroundImage_FieldInfo_[] = {
	{"loadedImage", "Z", nullptr, $PRIVATE, $field(CSS$BackgroundImage, loadedImage)},
	{"image", "Ljavax/swing/ImageIcon;", nullptr, $PRIVATE, $field(CSS$BackgroundImage, image)},
	{}
};

$MethodInfo _CSS$BackgroundImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$BackgroundImage::*)()>(&CSS$BackgroundImage::init$))},
	{"getImage", "(Ljava/net/URL;)Ljavax/swing/ImageIcon;", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$BackgroundImage_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$BackgroundImage", "javax.swing.text.html.CSS", "BackgroundImage", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$BackgroundImage_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$BackgroundImage",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$BackgroundImage_FieldInfo_,
	_CSS$BackgroundImage_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$BackgroundImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$BackgroundImage($Class* clazz) {
	return $of($alloc(CSS$BackgroundImage));
}

void CSS$BackgroundImage::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$BackgroundImage::parseCssValue($String* value) {
	$var(CSS$BackgroundImage, retValue, $new(CSS$BackgroundImage));
	$set(retValue, svalue, value);
	return $of(retValue);
}

$Object* CSS$BackgroundImage::parseHtmlValue($String* value) {
	return $of(parseCssValue(value));
}

$ImageIcon* CSS$BackgroundImage::getImage($URL* base) {
	$useLocalCurrentObjectStackCache();
	if (!this->loadedImage) {
		$synchronized(this) {
			if (!this->loadedImage) {
				$var($URL, url, $CSS::getURL(base, this->svalue));
				this->loadedImage = true;
				if (url != nullptr) {
					$set(this, image, $new($ImageIcon));
					$var($Image, tmpImg, $nc($($Toolkit::getDefaultToolkit()))->createImage(url));
					if (tmpImg != nullptr) {
						$nc(this->image)->setImage(tmpImg);
					}
				}
			}
		}
	}
	return this->image;
}

CSS$BackgroundImage::CSS$BackgroundImage() {
}

$Class* CSS$BackgroundImage::load$($String* name, bool initialize) {
	$loadClass(CSS$BackgroundImage, name, initialize, &_CSS$BackgroundImage_ClassInfo_, allocate$CSS$BackgroundImage);
	return class$;
}

$Class* CSS$BackgroundImage::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax