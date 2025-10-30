#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsLookAndFeel$RGBGrayFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$RGBGrayFilter::*)()>(&WindowsLookAndFeel$RGBGrayFilter::init$))},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$RGBGrayFilter_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "RGBGrayFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$RGBGrayFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	nullptr,
	_WindowsLookAndFeel$RGBGrayFilter_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$RGBGrayFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$RGBGrayFilter($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$RGBGrayFilter));
}

void WindowsLookAndFeel$RGBGrayFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t WindowsLookAndFeel$RGBGrayFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	float avg = (((int32_t)((rgb >> 16) & (uint32_t)255)) / 255.0f + ((int32_t)((rgb >> 8) & (uint32_t)255)) / 255.0f + ((int32_t)(rgb & (uint32_t)255)) / 255.0f) / 3;
	float alpha = (((int32_t)((rgb >> 24) & (uint32_t)255)) / 255.0f);
	avg = $Math::min(1.0f, $div((1.0f - avg), (100.0f / 35.0f)) + avg);
	int32_t rgbval = ((($cast(int32_t, (alpha * 255.0f)) << 24) | ($cast(int32_t, (avg * 255.0f)) << 16)) | ($cast(int32_t, (avg * 255.0f)) << 8)) | $cast(int32_t, (avg * 255.0f));
	return rgbval;
}

WindowsLookAndFeel$RGBGrayFilter::WindowsLookAndFeel$RGBGrayFilter() {
}

$Class* WindowsLookAndFeel$RGBGrayFilter::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$RGBGrayFilter, name, initialize, &_WindowsLookAndFeel$RGBGrayFilter_ClassInfo_, allocate$WindowsLookAndFeel$RGBGrayFilter);
	return class$;
}

$Class* WindowsLookAndFeel$RGBGrayFilter::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com