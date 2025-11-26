#include <javax/print/ServiceUI.h>

#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/SecurityException.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <sun/print/ServiceDialog.h>
#include <sun/print/SunAlternateMedia.h>
#include <jcpp.h>

#undef APPROVE
#undef FIDELITY_TRUE

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $SunAlternateMedia = ::sun::print::SunAlternateMedia;

namespace javax {
	namespace print {

$MethodInfo _ServiceUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServiceUI::*)()>(&ServiceUI::init$))},
	{"printDialog", "(Ljava/awt/GraphicsConfiguration;II[Ljavax/print/PrintService;Ljavax/print/PrintService;Ljavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/PrintService;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintService*(*)($GraphicsConfiguration*,int32_t,int32_t,$PrintServiceArray*,$PrintService*,$DocFlavor*,$PrintRequestAttributeSet*)>(&ServiceUI::printDialog)), "java.awt.HeadlessException"},
	{"removeUnsupportedAttributes", "(Ljavax/print/PrintService;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($PrintService*,$DocFlavor*,$AttributeSet*)>(&ServiceUI::removeUnsupportedAttributes))},
	{}
};

$ClassInfo _ServiceUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.ServiceUI",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ServiceUI_MethodInfo_
};

$Object* allocate$ServiceUI($Class* clazz) {
	return $of($alloc(ServiceUI));
}

void ServiceUI::init$() {
}

$PrintService* ServiceUI::printDialog($GraphicsConfiguration* gc, int32_t x, int32_t y, $PrintServiceArray* services, $PrintService* defaultService, $DocFlavor* flavor, $PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t defaultIndex = -1;
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	} else if ((services == nullptr) || ($nc(services)->length == 0)) {
		$throwNew($IllegalArgumentException, "services must be non-null and non-empty"_s);
	} else if (attributes == nullptr) {
		$throwNew($IllegalArgumentException, "attributes must be non-null"_s);
	}
	if (defaultService != nullptr) {
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			if ($nc(services->get(i))->equals(defaultService)) {
				defaultIndex = i;
				break;
			}
		}
		if (defaultIndex < 0) {
			$throwNew($IllegalArgumentException, "services must contain defaultService"_s);
		}
	} else {
		defaultIndex = 0;
	}
	$load($DialogOwner);
	$var($DialogOwner, dlgOwner, $cast($DialogOwner, $nc(attributes)->get($DialogOwner::class$)));
	$var($Window, owner, (dlgOwner != nullptr) ? $nc(dlgOwner)->getOwner() : ($Window*)nullptr);
	bool setOnTop = (dlgOwner != nullptr) && (owner == nullptr);
	$var($Rectangle, gcBounds, (gc == nullptr) ? $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getBounds() : $nc(gc)->getBounds());
	x += $nc(gcBounds)->x;
	y += gcBounds->y;
	$var($ServiceDialog, dialog, $new($ServiceDialog, gc, x, y, services, defaultIndex, flavor, attributes, owner));
	if (setOnTop) {
		try {
			dialog->setAlwaysOnTop(true);
		} catch ($SecurityException& e) {
		}
	}
	$var($Rectangle, dlgBounds, dialog->getBounds());
	if (!gcBounds->contains(dlgBounds)) {
		if ($nc(dlgBounds)->x + dlgBounds->width > gcBounds->x + gcBounds->width) {
			if ((gcBounds->x + gcBounds->width - dlgBounds->width) > gcBounds->x) {
				x = (gcBounds->x + gcBounds->width) - dlgBounds->width;
			} else {
				x = gcBounds->x;
			}
		}
		if ($nc(dlgBounds)->y + dlgBounds->height > gcBounds->y + gcBounds->height) {
			if ((gcBounds->y + gcBounds->height - dlgBounds->height) > gcBounds->y) {
				y = (gcBounds->y + gcBounds->height) - dlgBounds->height;
			} else {
				y = gcBounds->y;
			}
		}
		dialog->setBounds(x, y, $nc(dlgBounds)->width, dlgBounds->height);
	}
	dialog->show();
	if (dialog->getStatus() == $ServiceDialog::APPROVE) {
		$var($PrintRequestAttributeSet, newas, dialog->getAttributes());
		$load($Destination);
		$Class* dstCategory = $Destination::class$;
		$load($SunAlternateMedia);
		$Class* amCategory = $SunAlternateMedia::class$;
		$load($Fidelity);
		$Class* fdCategory = $Fidelity::class$;
		bool var$0 = attributes->containsKey(dstCategory);
		if (var$0 && !$nc(newas)->containsKey(dstCategory)) {
			attributes->remove(dstCategory);
		}
		bool var$1 = attributes->containsKey(amCategory);
		if (var$1 && !$nc(newas)->containsKey(amCategory)) {
			attributes->remove(amCategory);
		}
		attributes->addAll(newas);
		$var($Fidelity, fd, $cast($Fidelity, attributes->get(fdCategory)));
		if (fd != nullptr) {
			$init($Fidelity);
			if (fd == $Fidelity::FIDELITY_TRUE) {
				removeUnsupportedAttributes($(dialog->getPrintService()), flavor, attributes);
			}
		}
	}
	return dialog->getPrintService();
}

void ServiceUI::removeUnsupportedAttributes($PrintService* ps, $DocFlavor* flavor, $AttributeSet* aset) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, asUnsupported, $nc(ps)->getUnsupportedAttributes(flavor, aset));
	if (asUnsupported != nullptr) {
		$var($AttributeArray, usAttrs, asUnsupported->toArray());
		for (int32_t i = 0; i < $nc(usAttrs)->length; ++i) {
			$Class* category = $nc(usAttrs->get(i))->getCategory();
			if (ps->isAttributeCategorySupported(category)) {
				$var($Attribute, attr, $cast($Attribute, ps->getDefaultAttributeValue(category)));
				if (attr != nullptr) {
					$nc(aset)->add(attr);
				} else {
					$nc(aset)->remove(category);
				}
			} else {
				$nc(aset)->remove(category);
			}
		}
	}
}

ServiceUI::ServiceUI() {
}

$Class* ServiceUI::load$($String* name, bool initialize) {
	$loadClass(ServiceUI, name, initialize, &_ServiceUI_ClassInfo_, allocate$ServiceUI);
	return class$;
}

$Class* ServiceUI::class$ = nullptr;

	} // print
} // javax