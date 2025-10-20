#include <sun/print/ServiceDialog$MediaPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Vector.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <sun/print/ServiceDialog$MarginsPanel.h>
#include <sun/print/ServiceDialog.h>
#include <sun/print/SunAlternateMedia.h>
#include <jcpp.h>

#undef BOTH
#undef REMAINDER
#undef SELECTED
#undef TRAILING

using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Vector = ::java::util::Vector;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$MarginsPanel = ::sun::print::ServiceDialog$MarginsPanel;
using $SunAlternateMedia = ::sun::print::SunAlternateMedia;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$MediaPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$MediaPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$MediaPanel, strTitle)},
	{"lblSize", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MediaPanel, lblSize)},
	{"lblSource", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MediaPanel, lblSource)},
	{"cbSize", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PRIVATE, $field(ServiceDialog$MediaPanel, cbSize)},
	{"cbSource", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PRIVATE, $field(ServiceDialog$MediaPanel, cbSource)},
	{"sizes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/standard/MediaSizeName;>;", $PRIVATE, $field(ServiceDialog$MediaPanel, sizes)},
	{"sources", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/standard/MediaTray;>;", $PRIVATE, $field(ServiceDialog$MediaPanel, sources)},
	{"pnlMargins", "Lsun/print/ServiceDialog$MarginsPanel;", nullptr, $PRIVATE, $field(ServiceDialog$MediaPanel, pnlMargins)},
	{}
};

$MethodInfo _ServiceDialog$MediaPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$MediaPanel::*)($ServiceDialog*)>(&ServiceDialog$MediaPanel::init$))},
	{"addMediaListener", "(Lsun/print/ServiceDialog$MarginsPanel;)V", nullptr, $PUBLIC},
	{"getMediaName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ServiceDialog$MediaPanel::*)($String*)>(&ServiceDialog$MediaPanel::getMediaName))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$MediaPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$MediaPanel", "sun.print.ServiceDialog", "MediaPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$MediaPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$MediaPanel",
	"javax.swing.JPanel",
	"java.awt.event.ItemListener",
	_ServiceDialog$MediaPanel_FieldInfo_,
	_ServiceDialog$MediaPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$MediaPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$MediaPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$MediaPanel));
}

$String* ServiceDialog$MediaPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$MediaPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$MediaPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$MediaPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$MediaPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$MediaPanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.media"_s));
	$set(this, sizes, $new($Vector));
	$set(this, sources, $new($Vector));
	$set(this, pnlMargins, nullptr);
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	$set(this, cbSize, $new($JComboBox));
	$set(this, cbSource, $new($JComboBox));
	c->fill = $GridBagConstraints::BOTH;
	$set(c, insets, $ServiceDialog::compInsets);
	c->weighty = 1.0;
	c->weightx = 0.0;
	$set(this, lblSize, $new($JLabel, $($ServiceDialog::getMsg("label.size"_s)), $JLabel::TRAILING));
	$nc(this->lblSize)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.size"_s));
	$nc(this->lblSize)->setLabelFor(this->cbSize);
	$ServiceDialog::addToGB(this->lblSize, this, gridbag, c);
	c->weightx = 1.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->cbSize, this, gridbag, c);
	c->weightx = 0.0;
	c->gridwidth = 1;
	$set(this, lblSource, $new($JLabel, $($ServiceDialog::getMsg("label.source"_s)), $JLabel::TRAILING));
	$nc(this->lblSource)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.source"_s));
	$nc(this->lblSource)->setLabelFor(this->cbSource);
	$ServiceDialog::addToGB(this->lblSource, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->cbSource, this, gridbag, c);
}

$String* ServiceDialog$MediaPanel::getMediaName($String* key) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, newkey, $nc(key)->replace(u' ', u'-'));
		$assign(newkey, newkey->replace(u'#', u'n'));
		$init($ServiceDialog);
		return $nc($ServiceDialog::messageRB)->getString(newkey);
	} catch ($MissingResourceException&) {
		$var($MissingResourceException, e, $catch());
		return key;
	}
	$shouldNotReachHere();
}

void ServiceDialog$MediaPanel::itemStateChanged($ItemEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(e)->getSource());
	if (e->getStateChange() == $ItemEvent::SELECTED) {
		if ($equals(source, this->cbSize)) {
			int32_t index = $nc(this->cbSize)->getSelectedIndex();
			if ((index >= 0) && (index < $nc(this->sizes)->size())) {
				bool var$0 = ($nc(this->cbSource)->getItemCount() > 1);
				if (var$0 && ($nc(this->cbSource)->getSelectedIndex() >= 1)) {
					int32_t src = $nc(this->cbSource)->getSelectedIndex() - 1;
					$var($MediaTray, mt, $cast($MediaTray, $nc(this->sources)->get(src)));
					$nc(this->this$0->asCurrent)->add($$new($SunAlternateMedia, mt));
				}
				$nc(this->this$0->asCurrent)->add($cast($Attribute, $($nc(this->sizes)->get(index))));
			}
		} else if ($equals(source, this->cbSource)) {
			int32_t index = $nc(this->cbSource)->getSelectedIndex();
			if ((index >= 1) && (index < ($nc(this->sources)->size() + 1))) {
				$load($SunAlternateMedia);
				$nc(this->this$0->asCurrent)->remove($SunAlternateMedia::class$);
				$var($MediaTray, newTray, $cast($MediaTray, $nc(this->sources)->get(index - 1)));
				$load($Media);
				$var($Media, m, $cast($Media, $nc(this->this$0->asCurrent)->get($Media::class$)));
				if (m == nullptr || $instanceOf($MediaTray, m)) {
					$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(static_cast<$Media*>(newTray))));
				} else if ($instanceOf($MediaSizeName, m)) {
					$var($MediaSizeName, msn, $cast($MediaSizeName, m));
					$var($Media, def, $cast($Media, $nc(this->this$0->psCurrent)->getDefaultAttributeValue($Media::class$)));
					if ($instanceOf($MediaSizeName, def) && $nc(def)->equals(msn)) {
						$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(static_cast<$Media*>(newTray))));
					} else {
						$nc(this->this$0->asCurrent)->add($$new($SunAlternateMedia, newTray));
					}
				}
			} else if (index == 0) {
				$load($SunAlternateMedia);
				$nc(this->this$0->asCurrent)->remove($SunAlternateMedia::class$);
				if ($nc(this->cbSize)->getItemCount() > 0) {
					int32_t size = $nc(this->cbSize)->getSelectedIndex();
					$nc(this->this$0->asCurrent)->add($cast($Attribute, $($nc(this->sizes)->get(size))));
				}
			}
		}
		if (this->pnlMargins != nullptr) {
			$nc(this->pnlMargins)->updateInfo();
		}
	}
}

void ServiceDialog$MediaPanel::addMediaListener($ServiceDialog$MarginsPanel* pnl) {
	$set(this, pnlMargins, pnl);
}

void ServiceDialog$MediaPanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	$load($Media);
	$Class* mdCategory = $Media::class$;
	$load($SunAlternateMedia);
	$Class* amCategory = $SunAlternateMedia::class$;
	bool mediaSupported = false;
	$nc(this->cbSize)->removeItemListener(this);
	$nc(this->cbSize)->removeAllItems();
	$nc(this->cbSource)->removeItemListener(this);
	$nc(this->cbSource)->removeAllItems();
	$nc(this->cbSource)->addItem($(getMediaName("auto-select"_s)));
	$nc(this->sizes)->clear();
	$nc(this->sources)->clear();
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(mdCategory)) {
		mediaSupported = true;
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(mdCategory, this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent))));
		if ($instanceOf($MediaArray, values)) {
			$var($MediaArray, media, $cast($MediaArray, values));
			for (int32_t i = 0; i < $nc(media)->length; ++i) {
				$var($Media, medium, media->get(i));
				if ($instanceOf($MediaSizeName, medium)) {
					$nc(this->sizes)->add($cast($MediaSizeName, medium));
					$nc(this->cbSize)->addItem($(getMediaName($($nc(medium)->toString()))));
				} else if ($instanceOf($MediaTray, medium)) {
					$nc(this->sources)->add($cast($MediaTray, medium));
					$nc(this->cbSource)->addItem($(getMediaName($($nc(medium)->toString()))));
				}
			}
		}
	}
	bool msSupported = (mediaSupported && ($nc(this->sizes)->size() > 0));
	$nc(this->lblSize)->setEnabled(msSupported);
	$nc(this->cbSize)->setEnabled(msSupported);
	if (this->this$0->isAWT) {
		$nc(this->cbSource)->setEnabled(false);
		$nc(this->lblSource)->setEnabled(false);
	} else {
		$nc(this->cbSource)->setEnabled(mediaSupported);
	}
	if (mediaSupported) {
		$var($Media, medium, $cast($Media, $nc(this->this$0->asCurrent)->get(mdCategory)));
		$var($Media, defMedia, $cast($Media, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(mdCategory)));
		if ($instanceOf($MediaSizeName, defMedia)) {
			$nc(this->cbSize)->setSelectedIndex($nc(this->sizes)->size() > 0 ? $nc(this->sizes)->indexOf(defMedia) : -1);
		}
		if (medium == nullptr || !$nc(this->this$0->psCurrent)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(medium)), this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent)))) {
			$assign(medium, defMedia);
			if (medium == nullptr) {
				if ($nc(this->sizes)->size() > 0) {
					$assign(medium, $cast($Media, $nc(this->sizes)->get(0)));
				}
			}
			if (medium != nullptr) {
				$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(medium)));
			}
		}
		if (medium != nullptr) {
			if ($instanceOf($MediaSizeName, medium)) {
				$var($MediaSizeName, ms, $cast($MediaSizeName, medium));
				$nc(this->cbSize)->setSelectedIndex($nc(this->sizes)->indexOf(ms));
			} else if ($instanceOf($MediaTray, medium)) {
				$var($MediaTray, mt, $cast($MediaTray, medium));
				$nc(this->cbSource)->setSelectedIndex($nc(this->sources)->indexOf(mt) + 1);
			}
		} else {
			$nc(this->cbSize)->setSelectedIndex($nc(this->sizes)->size() > 0 ? 0 : -1);
			$nc(this->cbSource)->setSelectedIndex(0);
		}
		$var($SunAlternateMedia, alt, $cast($SunAlternateMedia, $nc(this->this$0->asCurrent)->get(amCategory)));
		if (alt != nullptr) {
			$var($Media, md, alt->getMedia());
			if ($instanceOf($MediaTray, md)) {
				$var($MediaTray, mt, $cast($MediaTray, md));
				$nc(this->cbSource)->setSelectedIndex($nc(this->sources)->indexOf(mt) + 1);
			}
		}
		int32_t selIndex = $nc(this->cbSize)->getSelectedIndex();
		if ((selIndex >= 0) && (selIndex < $nc(this->sizes)->size())) {
			$nc(this->this$0->asCurrent)->add($cast($Attribute, $($nc(this->sizes)->get(selIndex))));
		}
		selIndex = $nc(this->cbSource)->getSelectedIndex();
		if ((selIndex >= 1) && (selIndex < ($nc(this->sources)->size() + 1))) {
			$var($MediaTray, mt, $cast($MediaTray, $nc(this->sources)->get(selIndex - 1)));
			if ($instanceOf($MediaTray, medium)) {
				$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(static_cast<$Media*>(mt))));
			} else {
				$nc(this->this$0->asCurrent)->add($$new($SunAlternateMedia, mt));
			}
		}
	}
	$nc(this->cbSize)->addItemListener(this);
	$nc(this->cbSource)->addItemListener(this);
}

ServiceDialog$MediaPanel::ServiceDialog$MediaPanel() {
}

$Class* ServiceDialog$MediaPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$MediaPanel, name, initialize, &_ServiceDialog$MediaPanel_ClassInfo_, allocate$ServiceDialog$MediaPanel);
	return class$;
}

$Class* ServiceDialog$MediaPanel::class$ = nullptr;

	} // print
} // sun