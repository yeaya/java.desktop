#include <sun/swing/plaf/synth/SynthFileChooserUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$1.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$FileNameCompletionAction.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$GlobFilter.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$SynthFCPropertyChangeListener.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$UIBorder.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

#undef BACKGROUND
#undef DISABLED
#undef ENABLED
#undef FILE_CHOOSER
#undef FOCUSED

using $FileArray = $Array<::java::io::File>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $SynthFileChooserUI$1 = ::sun::swing::plaf::synth::SynthFileChooserUI$1;
using $SynthFileChooserUI$FileNameCompletionAction = ::sun::swing::plaf::synth::SynthFileChooserUI$FileNameCompletionAction;
using $SynthFileChooserUI$GlobFilter = ::sun::swing::plaf::synth::SynthFileChooserUI$GlobFilter;
using $SynthFileChooserUI$SynthFCPropertyChangeListener = ::sun::swing::plaf::synth::SynthFileChooserUI$SynthFCPropertyChangeListener;
using $SynthFileChooserUI$UIBorder = ::sun::swing::plaf::synth::SynthFileChooserUI$UIBorder;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI_FieldInfo_[] = {
	{"approveButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(SynthFileChooserUI, approveButton)},
	{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(SynthFileChooserUI, cancelButton)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthFileChooserUI, style)},
	{"fileNameCompletionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(SynthFileChooserUI, fileNameCompletionAction)},
	{"actualFileFilter", "Ljavax/swing/filechooser/FileFilter;", nullptr, $PRIVATE, $field(SynthFileChooserUI, actualFileFilter)},
	{"globFilter", "Lsun/swing/plaf/synth/SynthFileChooserUI$GlobFilter;", nullptr, $PRIVATE, $field(SynthFileChooserUI, globFilter)},
	{"fileNameCompletionString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUI, fileNameCompletionString)},
	{}
};

$MethodInfo _SynthFileChooserUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthFileChooserUI::*)($JFileChooser*)>(&SynthFileChooserUI::init$))},
	{"clearIconCache", "()V", nullptr, $PUBLIC},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthFileChooserUI::createUI))},
	{"doAccessoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doAncestorChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doMultiSelectionChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doSelectedFilesChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getCancelButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getCommonStartString", "([Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SynthFileChooserUI::*)($FileArray*)>(&SynthFileChooserUI::getCommonStartString))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthFileChooserUI::*)($JComponent*)>(&SynthFileChooserUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PROTECTED},
	{"getFileNameCompletionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getRegion", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/Region;", nullptr, $PRIVATE, $method(static_cast<$Region*(SynthFileChooserUI::*)($JComponent*)>(&SynthFileChooserUI::getRegion))},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isGlobPattern", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&SynthFileChooserUI::isGlobPattern))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"resetGlobFilter", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUI::*)()>(&SynthFileChooserUI::resetGlobFilter))},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateFileNameCompletion", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUI::*)()>(&SynthFileChooserUI::updateFileNameCompletion))},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUI::*)($JComponent*)>(&SynthFileChooserUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthFileChooserUI_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder", "sun.swing.plaf.synth.SynthFileChooserUI", "UIBorder", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUI$GlobFilter", "sun.swing.plaf.synth.SynthFileChooserUI", "GlobFilter", 0},
	{"sun.swing.plaf.synth.SynthFileChooserUI$FileNameCompletionAction", "sun.swing.plaf.synth.SynthFileChooserUI", "FileNameCompletionAction", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUI$SynthFCPropertyChangeListener", "sun.swing.plaf.synth.SynthFileChooserUI", "SynthFCPropertyChangeListener", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater", "sun.swing.plaf.synth.SynthFileChooserUI", "DelayedSelectionUpdater", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.swing.plaf.synth.SynthFileChooserUI",
	"javax.swing.plaf.basic.BasicFileChooserUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthFileChooserUI_FieldInfo_,
	_SynthFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder,sun.swing.plaf.synth.SynthFileChooserUI$GlobFilter,sun.swing.plaf.synth.SynthFileChooserUI$FileNameCompletionAction,sun.swing.plaf.synth.SynthFileChooserUI$SynthFCPropertyChangeListener,sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater,sun.swing.plaf.synth.SynthFileChooserUI$1"
};

$Object* allocate$SynthFileChooserUI($Class* clazz) {
	return $of($alloc(SynthFileChooserUI));
}

$ActionMap* SynthFileChooserUI::createActionMap() {
	 return this->$BasicFileChooserUI::createActionMap();
}

void SynthFileChooserUI::setFileName($String* fileName) {
	this->$BasicFileChooserUI::setFileName(fileName);
}

$String* SynthFileChooserUI::getFileName() {
	 return this->$BasicFileChooserUI::getFileName();
}

int32_t SynthFileChooserUI::hashCode() {
	 return this->$BasicFileChooserUI::hashCode();
}

bool SynthFileChooserUI::equals(Object$* arg0) {
	 return this->$BasicFileChooserUI::equals(arg0);
}

$Object* SynthFileChooserUI::clone() {
	 return this->$BasicFileChooserUI::clone();
}

$String* SynthFileChooserUI::toString() {
	 return this->$BasicFileChooserUI::toString();
}

void SynthFileChooserUI::finalize() {
	this->$BasicFileChooserUI::finalize();
}

$ComponentUI* SynthFileChooserUI::createUI($JComponent* c) {
	$init(SynthFileChooserUI);
	return $new($SynthFileChooserUIImpl, $cast($JFileChooser, c));
}

void SynthFileChooserUI::init$($JFileChooser* b) {
	$BasicFileChooserUI::init$(b);
	$set(this, fileNameCompletionAction, $new($SynthFileChooserUI$FileNameCompletionAction, this));
	$set(this, actualFileFilter, nullptr);
	$set(this, globFilter, nullptr);
}

$SynthContext* SynthFileChooserUI::getContext($JComponent* c) {
	$init($Region);
	return $new($SynthContext, c, $Region::FILE_CHOOSER, this->style, getComponentState(c));
}

$SynthContext* SynthFileChooserUI::getContext($JComponent* c, int32_t state) {
	$var($Region, region, $SynthLookAndFeel::getRegion(c));
	$init($Region);
	return $new($SynthContext, c, $Region::FILE_CHOOSER, this->style, state);
}

$Region* SynthFileChooserUI::getRegion($JComponent* c) {
	return $SynthLookAndFeel::getRegion(c);
}

int32_t SynthFileChooserUI::getComponentState($JComponent* c) {
	if ($nc(c)->isEnabled()) {
		if (c->isFocusOwner()) {
			return $SynthConstants::ENABLED | $SynthConstants::FOCUSED;
		}
		return $SynthConstants::ENABLED;
	}
	return $SynthConstants::DISABLED;
}

void SynthFileChooserUI::updateStyle($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$init($Region);
	$var($SynthStyle, newStyle, $nc($($SynthLookAndFeel::getStyleFactory()))->getStyle(c, $Region::FILE_CHOOSER));
	if (newStyle != this->style) {
		if (this->style != nullptr) {
			$nc(this->style)->uninstallDefaults($(getContext(c, $SynthConstants::ENABLED)));
		}
		$set(this, style, newStyle);
		$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
		$nc(this->style)->installDefaults(context);
		$var($Border, border, $nc(c)->getBorder());
		if (border == nullptr || $instanceOf($UIResource, border)) {
			c->setBorder($$new($SynthFileChooserUI$UIBorder, this, $($nc(this->style)->getInsets(context, nullptr))));
		}
		$set(this, directoryIcon, $nc(this->style)->getIcon(context, "FileView.directoryIcon"_s));
		$set(this, fileIcon, $nc(this->style)->getIcon(context, "FileView.fileIcon"_s));
		$set(this, computerIcon, $nc(this->style)->getIcon(context, "FileView.computerIcon"_s));
		$set(this, hardDriveIcon, $nc(this->style)->getIcon(context, "FileView.hardDriveIcon"_s));
		$set(this, floppyDriveIcon, $nc(this->style)->getIcon(context, "FileView.floppyDriveIcon"_s));
		$set(this, newFolderIcon, $nc(this->style)->getIcon(context, "FileChooser.newFolderIcon"_s));
		$set(this, upFolderIcon, $nc(this->style)->getIcon(context, "FileChooser.upFolderIcon"_s));
		$set(this, homeFolderIcon, $nc(this->style)->getIcon(context, "FileChooser.homeFolderIcon"_s));
		$set(this, detailsViewIcon, $nc(this->style)->getIcon(context, "FileChooser.detailsViewIcon"_s));
		$set(this, listViewIcon, $nc(this->style)->getIcon(context, "FileChooser.listViewIcon"_s));
	}
}

void SynthFileChooserUI::installUI($JComponent* c) {
	$BasicFileChooserUI::installUI(c);
	$SwingUtilities::replaceUIActionMap(c, $(createActionMap()));
}

void SynthFileChooserUI::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(fc, $SynthConstants::ENABLED));
	$set(this, cancelButton, $new($JButton, this->cancelButtonText));
	$nc(this->cancelButton)->setName("SynthFileChooser.cancelButton"_s);
	$nc(this->cancelButton)->setIcon($($nc($($nc(context)->getStyle()))->getIcon(context, "FileChooser.cancelIcon"_s)));
	$nc(this->cancelButton)->setMnemonic(this->cancelButtonMnemonic);
	$nc(this->cancelButton)->setToolTipText(this->cancelButtonToolTipText);
	$nc(this->cancelButton)->addActionListener($(getCancelSelectionAction()));
	$set(this, approveButton, $new($JButton, $(getApproveButtonText(fc))));
	$nc(this->approveButton)->setName("SynthFileChooser.approveButton"_s);
	$nc(this->approveButton)->setIcon($($nc($($nc(context)->getStyle()))->getIcon(context, "FileChooser.okIcon"_s)));
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(fc));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(fc)));
	$nc(this->approveButton)->addActionListener($(getApproveSelectionAction()));
}

void SynthFileChooserUI::uninstallComponents($JFileChooser* fc) {
	$nc(fc)->removeAll();
}

void SynthFileChooserUI::installListeners($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$BasicFileChooserUI::installListeners(fc);
	$nc($(getModel()))->addListDataListener($$new($SynthFileChooserUI$1, this));
}

void SynthFileChooserUI::installDefaults($JFileChooser* fc) {
	$BasicFileChooserUI::installDefaults(fc);
	updateStyle(fc);
}

void SynthFileChooserUI::uninstallDefaults($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$BasicFileChooserUI::uninstallDefaults(fc);
	$var($SynthContext, context, getContext($(getFileChooser()), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthFileChooserUI::installIcons($JFileChooser* fc) {
}

void SynthFileChooserUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	if ($nc(c)->isOpaque()) {
		$init($ColorType);
		$nc(g)->setColor($($nc(this->style)->getColor(context, $ColorType::BACKGROUND)));
		int32_t var$0 = c->getWidth();
		g->fillRect(0, 0, var$0, c->getHeight());
	}
	$var($SynthContext, var$1, context);
	$var($Graphics, var$2, g);
	int32_t var$3 = $nc(c)->getWidth();
	$nc($($nc(this->style)->getPainter(context)))->paintFileChooserBackground(var$1, var$2, 0, 0, var$3, c->getHeight());
	paint(context, g);
}

void SynthFileChooserUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthFileChooserUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthFileChooserUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthFileChooserUI::doSelectedFileChanged($PropertyChangeEvent* e) {
}

void SynthFileChooserUI::doSelectedFilesChanged($PropertyChangeEvent* e) {
}

void SynthFileChooserUI::doDirectoryChanged($PropertyChangeEvent* e) {
}

void SynthFileChooserUI::doAccessoryChanged($PropertyChangeEvent* e) {
}

void SynthFileChooserUI::doFileSelectionModeChanged($PropertyChangeEvent* e) {
}

void SynthFileChooserUI::doMultiSelectionChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		$nc($(getFileChooser()))->setSelectedFiles(nullptr);
	}
}

void SynthFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		$nc(this->approveButton)->setText($(getApproveButtonText($(getFileChooser()))));
		$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText($(getFileChooser()))));
		$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic($(getFileChooser())));
	}
}

void SynthFileChooserUI::doAncestorChanged($PropertyChangeEvent* e) {
}

$PropertyChangeListener* SynthFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return $new($SynthFileChooserUI$SynthFCPropertyChangeListener, this);
}

void SynthFileChooserUI::updateFileNameCompletion() {
	$useLocalCurrentObjectStackCache();
	if (this->fileNameCompletionString != nullptr) {
		if ($nc(this->fileNameCompletionString)->equals($(getFileName()))) {
			$var($FileArray, files, $fcast($FileArray, $nc($($nc($(getModel()))->getFiles()))->toArray($$new($FileArray, 0))));
			$var($String, str, getCommonStartString(files));
			if (str != nullptr && str->startsWith(this->fileNameCompletionString)) {
				setFileName(str);
			}
			$set(this, fileNameCompletionString, nullptr);
		}
	}
}

$String* SynthFileChooserUI::getCommonStartString($FileArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, nullptr);
	$var($String, str2, nullptr);
	int32_t i = 0;
	if ($nc(files)->length == 0) {
		return nullptr;
	}
	while (true) {
		for (int32_t f = 0; f < $nc(files)->length; ++f) {
			$var($String, name, $nc(files->get(f))->getName());
			if (f == 0) {
				if ($nc(name)->length() == i) {
					return str;
				}
				$assign(str2, $nc(name)->substring(0, i + 1));
			}
			if (!$nc(name)->startsWith(str2)) {
				return str;
			}
		}
		$assign(str, str2);
		++i;
	}
}

void SynthFileChooserUI::resetGlobFilter() {
	$useLocalCurrentObjectStackCache();
	if (this->actualFileFilter != nullptr) {
		$var($JFileChooser, chooser, getFileChooser());
		$var($FileFilter, currentFilter, $nc(chooser)->getFileFilter());
		if (currentFilter != nullptr && $of(currentFilter)->equals(this->globFilter)) {
			chooser->setFileFilter(this->actualFileFilter);
			chooser->removeChoosableFileFilter(this->globFilter);
		}
		$set(this, actualFileFilter, nullptr);
	}
}

bool SynthFileChooserUI::isGlobPattern($String* fileName) {
	$init(SynthFileChooserUI);
	$init($File);
	bool var$0 = ($File::separatorChar == u'\\' && $nc(fileName)->indexOf((int32_t)u'*') >= 0);
	if (!var$0) {
		bool var$1 = $File::separatorChar == u'/';
		if (var$1) {
			bool var$3 = $nc(fileName)->indexOf((int32_t)u'*') >= 0;
			bool var$2 = var$3 || $nc(fileName)->indexOf((int32_t)u'?') >= 0;
			var$1 = (var$2 || $nc(fileName)->indexOf((int32_t)u'[') >= 0);
		}
		var$0 = (var$1);
	}
	return (var$0);
}

$Action* SynthFileChooserUI::getFileNameCompletionAction() {
	return this->fileNameCompletionAction;
}

$JButton* SynthFileChooserUI::getApproveButton($JFileChooser* fc) {
	return this->approveButton;
}

$JButton* SynthFileChooserUI::getCancelButton($JFileChooser* fc) {
	return this->cancelButton;
}

void SynthFileChooserUI::clearIconCache() {
}

SynthFileChooserUI::SynthFileChooserUI() {
}

$Class* SynthFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI, name, initialize, &_SynthFileChooserUI_ClassInfo_, allocate$SynthFileChooserUI);
	return class$;
}

$Class* SynthFileChooserUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun