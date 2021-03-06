//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "UI.h"


// Declare the bitmap loading function
extern void wxC8968InitBitmapResources();

static bool bBitmapLoaded = false;


wxCrafterTabBase::wxCrafterTabBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8968InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_auibar = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_DEFAULT_STYLE);
    m_auibar->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer2->Add(m_auibar, 0, wxEXPAND, 5);
    
    m_auibar->AddTool(ID_TOOL_NEW_PROJECT, _("Create new Code::Blocks Project"), wxXmlResource::Get()->LoadBitmap(wxT("project")), wxNullBitmap, wxITEM_NORMAL, _("Create new Code::Blocks Project with wxCrafter"), _("Create new Code::Blocks Project with wxCrafter"), NULL);
    
    m_auibar->AddTool(ID_TOOL_NEW_RESOURCE, _("Add wxCrafter file to a project"), wxXmlResource::Get()->LoadBitmap(wxT("new-resource")), wxNullBitmap, wxITEM_NORMAL, _("Add wxCrafter file to a project"), _("Add wxCrafter file to a project"), NULL);
    
    m_auibar->AddTool(ID_TOOL_SETTINGS, _("Tool Label"), wxXmlResource::Get()->LoadBitmap(wxT("settings")), wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""), NULL);
    m_auibar->Realize();
    
    m_treeCtrl = new wxTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTR_DEFAULT_STYLE|wxTR_HIDE_ROOT);
    
    boxSizer2->Add(m_treeCtrl, 1, wxALL|wxEXPAND, 0);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(ID_TOOL_NEW_PROJECT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnNewCBProject), NULL, this);
    this->Connect(ID_TOOL_NEW_RESOURCE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnNewWxCrafterFile), NULL, this);
    this->Connect(ID_TOOL_NEW_RESOURCE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(wxCrafterTabBase::OnNewWxCrafterFileUI), NULL, this);
    this->Connect(ID_TOOL_SETTINGS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnSettings), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(wxCrafterTabBase::OnItemActivated), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(wxCrafterTabBase::OnItemMenu), NULL, this);
    
}

wxCrafterTabBase::~wxCrafterTabBase()
{
    this->Disconnect(ID_TOOL_NEW_PROJECT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnNewCBProject), NULL, this);
    this->Disconnect(ID_TOOL_NEW_RESOURCE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnNewWxCrafterFile), NULL, this);
    this->Disconnect(ID_TOOL_NEW_RESOURCE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(wxCrafterTabBase::OnNewWxCrafterFileUI), NULL, this);
    this->Disconnect(ID_TOOL_SETTINGS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(wxCrafterTabBase::OnSettings), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(wxCrafterTabBase::OnItemActivated), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(wxCrafterTabBase::OnItemMenu), NULL, this);
    
}

wxcImages::wxcImages()
    : wxImageList(16, 16, true)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8968InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmpWxCrafterLogo"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("m_bmpWxCrafterLogo"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmpFolder"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("m_bmpFolder"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wxframe"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wxframe"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wxdialog"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wxdialog"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wxpanel"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wxpanel"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wxwizard"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wxwizard"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wxpopupwindow"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wxpopupwindow"), bmp ) );
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("wximglist"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("wximglist"), bmp ) );
    }
    
}

wxcImages::~wxcImages()
{
}

NewWxCrafterFileDlgBase::NewWxCrafterFileDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8968InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer36 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer36);
    
    wxFlexGridSizer* flexGridSizer44 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer44->SetFlexibleDirection( wxBOTH );
    flexGridSizer44->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer44->AddGrowableCol(1);
    
    boxSizer36->Add(flexGridSizer44, 1, wxALL|wxEXPAND, 5);
    
    m_staticText48 = new wxStaticText(this, wxID_ANY, _("Select Project:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer44->Add(m_staticText48, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceProjectsArr;
    m_choiceProjects = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceProjectsArr, 0);
    m_choiceProjects->SetToolTip(_("Associate the wxCrafter project file to a project"));
    
    flexGridSizer44->Add(m_choiceProjects, 0, wxALL|wxEXPAND, 5);
    
    m_staticText52 = new wxStaticText(this, wxID_ANY, _("File name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer44->Add(m_staticText52, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_filePicker = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_USE_TEXTCTRL|wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE);
    
    flexGridSizer44->Add(m_filePicker, 0, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer38 = new wxStdDialogButtonSizer();
    
    boxSizer36->Add(m_stdBtnSizer38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer38->AddButton(m_buttonOK);
    
    m_button42 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer38->AddButton(m_button42);
    m_stdBtnSizer38->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_choiceProjects->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NewWxCrafterFileDlgBase::OnProjectSelected), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewWxCrafterFileDlgBase::OnButtonOKUI), NULL, this);
    
}

NewWxCrafterFileDlgBase::~NewWxCrafterFileDlgBase()
{
    m_choiceProjects->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NewWxCrafterFileDlgBase::OnProjectSelected), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewWxCrafterFileDlgBase::OnButtonOKUI), NULL, this);
    
}

NewCodeBlocksProjectWizardBase::NewCodeBlocksProjectWizardBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxBitmap& bmp, const wxPoint& pos, long style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8968InitBitmapResources();
        bBitmapLoaded = true;
    }
    Create(parent, id, title, wxXmlResource::Get()->LoadBitmap(wxT("wizard")), pos, style);
    
    m_wizardPage82 = new wxWizardPageSimple(this, NULL, NULL, wxNullBitmap);
    m_pages.push_back(m_wizardPage82);
    
    wxBoxSizer* boxSizer86 = new wxBoxSizer(wxVERTICAL);
    m_wizardPage82->SetSizer(boxSizer86);
    
    wxStaticBoxSizer* staticBoxSizer96 = new wxStaticBoxSizer( new wxStaticBox(m_wizardPage82, wxID_ANY, wxT("")), wxVERTICAL);
    
    boxSizer86->Add(staticBoxSizer96, 0, wxALL|wxEXPAND, 5);
    
    m_staticText98 = new wxStaticText(m_wizardPage82, wxID_ANY, _("Project Details"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticText98Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText98Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText98->SetFont(m_staticText98Font);
    
    staticBoxSizer96->Add(m_staticText98, 0, wxALL|wxALIGN_LEFT, 5);
    
    m_staticText112 = new wxStaticText(m_wizardPage82, wxID_ANY, _("Set the project name and location"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    staticBoxSizer96->Add(m_staticText112, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    
    wxFlexGridSizer* flexGridSizer100 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer100->SetFlexibleDirection( wxBOTH );
    flexGridSizer100->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer100->AddGrowableCol(1);
    
    boxSizer86->Add(flexGridSizer100, 1, wxALL|wxEXPAND, 5);
    
    m_staticText106 = new wxStaticText(m_wizardPage82, wxID_ANY, _("Name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer100->Add(m_staticText106, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlProjectName = new wxTextCtrl(m_wizardPage82, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlProjectName->SetToolTip(_("Set the project name"));
    m_textCtrlProjectName->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlProjectName->SetHint(wxT(""));
    #endif
    
    flexGridSizer100->Add(m_textCtrlProjectName, 0, wxALL|wxEXPAND, 5);
    
    m_staticText102 = new wxStaticText(m_wizardPage82, wxID_ANY, _("Project Folder:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer100->Add(m_staticText102, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_dirPickerProjectFolder = new wxDirPickerCtrl(m_wizardPage82, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxSize(-1,-1), wxDIRP_USE_TEXTCTRL);
    m_dirPickerProjectFolder->SetToolTip(_("Select the project folder"));
    
    flexGridSizer100->Add(m_dirPickerProjectFolder, 0, wxALL|wxEXPAND, 5);
    
    m_staticTextProjectPathPreview = new wxStaticText(m_wizardPage82, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer86->Add(m_staticTextProjectPathPreview, 0, wxALL|wxEXPAND, 5);
    
    m_wizardPage78 = new wxWizardPageSimple(this, NULL, NULL, wxNullBitmap);
    m_pages.push_back(m_wizardPage78);
    if (m_pages.size() > 1) {
        for(size_t i=1; i<m_pages.size(); i++) {
            wxWizardPageSimple::Chain(m_pages.at(i-1), m_pages.at(i));
        }
    }
    GetPageAreaSizer()->Add(m_pages.at(0));
    
    wxBoxSizer* boxSizer84 = new wxBoxSizer(wxVERTICAL);
    m_wizardPage78->SetSizer(boxSizer84);
    
    wxStaticBoxSizer* staticBoxSizer90 = new wxStaticBoxSizer( new wxStaticBox(m_wizardPage78, wxID_ANY, wxT("")), wxVERTICAL);
    
    boxSizer84->Add(staticBoxSizer90, 0, wxALL|wxEXPAND, 5);
    
    m_staticText92 = new wxStaticText(m_wizardPage78, wxID_ANY, _("Configure wxWidgets"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticText92Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText92Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText92->SetFont(m_staticText92Font);
    
    staticBoxSizer90->Add(m_staticText92, 0, wxALL|wxALIGN_LEFT, 5);
    
    m_staticText114 = new wxStaticText(m_wizardPage78, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    staticBoxSizer90->Add(m_staticText114, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    
    wxFlexGridSizer* flexGridSizer94 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer94->SetFlexibleDirection( wxBOTH );
    flexGridSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer94->AddGrowableCol(1);
    flexGridSizer94->AddGrowableRow(2);
    
    boxSizer84->Add(flexGridSizer94, 1, wxALL|wxEXPAND, 5);
    
    m_staticText116 = new wxStaticText(m_wizardPage78, wxID_ANY, _("wxWidgets installation folder:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer94->Add(m_staticText116, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_dirPickerWxPath = new wxDirPickerCtrl(m_wizardPage78, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxSize(-1,-1), wxDIRP_USE_TEXTCTRL);
    m_dirPickerWxPath->SetToolTip(_("Select wxWidgets base installation folder\ne.g. C:\\wxWidgets-3.0.0"));
    
    flexGridSizer94->Add(m_dirPickerWxPath, 0, wxALL|wxEXPAND, 5);
    
    m_staticText120 = new wxStaticText(m_wizardPage78, wxID_ANY, _("wxWidgets Build Type:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer94->Add(m_staticText120, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceBuildTypeArr;
    m_choiceBuildTypeArr.Add(wxT("Dynamic Library"));
    m_choiceBuildTypeArr.Add(wxT("Static"));
    m_choiceBuildType = new wxChoice(m_wizardPage78, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceBuildTypeArr, 0);
    m_choiceBuildType->SetToolTip(_("Select the wxWidgets build type.\nThis can be either static library or dynamic library (dll)"));
    m_choiceBuildType->SetSelection(0);
    
    flexGridSizer94->Add(m_choiceBuildType, 0, wxALL|wxEXPAND, 5);
    
    m_staticText124 = new wxStaticText(m_wizardPage78, wxID_ANY, _("wxWidgets Components:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer94->Add(m_staticText124, 0, wxALL|wxALIGN_RIGHT, 5);
    
    m_textCtrlComponents = new wxTextCtrl(m_wizardPage78, wxID_ANY, wxT("std\naui"), wxDefaultPosition, wxSize(-1,-1), wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    m_textCtrlComponents->SetToolTip(_("Select the wxWidgets components to include\nUsually, you don't need more than 'std' and 'aui'\nIf your wxWidgets is a single DLL or library, leave this field\nempty"));
    
    flexGridSizer94->Add(m_textCtrlComponents, 1, wxALL|wxEXPAND, 5);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxEVT_WIZARD_PAGE_CHANGING, wxWizardEventHandler(NewCodeBlocksProjectWizardBase::OnPageChanging), NULL, this);
    m_textCtrlProjectName->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewCodeBlocksProjectWizardBase::OnProjectNameUpdated), NULL, this);
    m_dirPickerProjectFolder->Connect(wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler(NewCodeBlocksProjectWizardBase::OnProjectFolderPathChanged), NULL, this);
    m_staticText116->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_dirPickerWxPath->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_staticText120->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_choiceBuildType->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    
}

NewCodeBlocksProjectWizardBase::~NewCodeBlocksProjectWizardBase()
{
    this->Disconnect(wxEVT_WIZARD_PAGE_CHANGING, wxWizardEventHandler(NewCodeBlocksProjectWizardBase::OnPageChanging), NULL, this);
    m_textCtrlProjectName->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NewCodeBlocksProjectWizardBase::OnProjectNameUpdated), NULL, this);
    m_dirPickerProjectFolder->Disconnect(wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler(NewCodeBlocksProjectWizardBase::OnProjectFolderPathChanged), NULL, this);
    m_staticText116->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_dirPickerWxPath->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_staticText120->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    m_choiceBuildType->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewCodeBlocksProjectWizardBase::OnEnableIfMSW), NULL, this);
    
}

wxCrafterSettingsDlgBase::wxCrafterSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC8968InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer136 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer136);
    
    wxFlexGridSizer* flexGridSizer144 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer144->SetFlexibleDirection( wxBOTH );
    flexGridSizer144->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer144->AddGrowableCol(1);
    
    boxSizer136->Add(flexGridSizer144, 1, wxALL|wxEXPAND, 5);
    
    m_staticText146 = new wxStaticText(this, wxID_ANY, _("wxCrafter executable:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer144->Add(m_staticText146, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlPath = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlPath->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPath->SetHint(wxT(""));
    #endif
    
    flexGridSizer144->Add(m_textCtrlPath, 0, wxALL|wxEXPAND, 5);
    
    m_buttonBrowse = new wxButton(this, wxID_OPEN, _("Browse..."), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer144->Add(m_buttonBrowse, 0, wxALL, 5);
    
    m_stdBtnSizer138 = new wxStdDialogButtonSizer();
    
    boxSizer136->Add(m_stdBtnSizer138, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer138->AddButton(m_buttonOK);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer138->AddButton(m_buttonCancel);
    m_stdBtnSizer138->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_buttonBrowse->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(wxCrafterSettingsDlgBase::OnBrowse), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(wxCrafterSettingsDlgBase::OnOKUI), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(wxCrafterSettingsDlgBase::OnOK), NULL, this);
    
}

wxCrafterSettingsDlgBase::~wxCrafterSettingsDlgBase()
{
    m_buttonBrowse->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(wxCrafterSettingsDlgBase::OnBrowse), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(wxCrafterSettingsDlgBase::OnOKUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(wxCrafterSettingsDlgBase::OnOK), NULL, this);
    
}
