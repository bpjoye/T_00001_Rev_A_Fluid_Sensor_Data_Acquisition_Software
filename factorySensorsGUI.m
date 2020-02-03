%** Benjamin Joye                                               **
%** Watertech Holdings, LLC.                                    **
%** T-00001 Rev A Fluid Sensor Data Acquisition Software        **
%** Publish Date: 6/16/2017                                     **
%** MATLAB Ver: R2007b                                          **


function varargout = factorySensorsGUI(varargin)
% FACTORYSENSORSGUI M-file for factorySensorsGUI.fig
%      FACTORYSENSORSGUI, by itself, creates a new FACTORYSENSORSGUI or raises the existing
%      singleton*.
%
%      H = FACTORYSENSORSGUI returns the handle to a new FACTORYSENSORSGUI or the handle to
%      the existing singleton*.
%
%      FACTORYSENSORSGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FACTORYSENSORSGUI.M with the given input arguments.
%
%      FACTORYSENSORSGUI('Property','Value',...) creates a new FACTORYSENSORSGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before factorySensorsGUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to factorySensorsGUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help factorySensorsGUI

% Last Modified by GUIDE v2.5 14-Jun-2017 12:24:30

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @factorySensorsGUI_OpeningFcn, ...
                   'gui_OutputFcn',  @factorySensorsGUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before factorySensorsGUI is made visible.
function factorySensorsGUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to factorySensorsGUI (see VARARGIN)
global s1;
s1 = serial('COM6','BaudRate',9600);
handles.s1 = s1;
t = timer('TimerFcn',{@gatherallbtn_Callback, handles},'Period',15,'ExecutionMode','fixedRate','StartDelay',0.5);
handles.t = t;

% Choose default command line output for factorySensorsGUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes factorySensorsGUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = factorySensorsGUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function edit0_Callback(hObject, eventdata, handles)
% hObject    handle to edit0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit0 as text
%        str2double(get(hObject,'String')) returns contents of edit0 as a double


% --- Executes during object creation, after setting all properties.
function edit0_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double


% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit2_Callback(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit2 as text
%        str2double(get(hObject,'String')) returns contents of edit2 as a double


% --- Executes during object creation, after setting all properties.
function edit2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit3_Callback(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit3 as text
%        str2double(get(hObject,'String')) returns contents of edit3 as a double


% --- Executes during object creation, after setting all properties.
function edit3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in connection_btn.
function connection_btn_Callback(hObject, eventdata, handles)
% hObject    handle to connection_btn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
s1 = handles.s1;
bypass = 0;
    
if (strcmp(s1.status,'closed') == 1)
    fopen(s1);
    
    pause(1);

    fread(s1, s1.bytesavailable);
    s1.bytesavailable;
    
    if (strcmp(s1.status,'open') == 1)
        set(handles.connection_btn, 'String','Disconnect');
    end  
    
    bypass = 1;
end

if (strcmp(s1.status,'open') == 1 && bypass == 0)
    
    fclose(s1);
    
    if (strcmp(s1.status,'closed') == 1)
        set(handles.connection_btn,'String','Connect');
    end
end


% --- Executes on button press in gatherallbtn.
function gatherallbtn_Callback(hObject, eventdata, handles)
% hObject    handle to gatherallbtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.edit6,'BackgroundColor',[0 1 0]);

[a,b,c,d,e] = gatherData();

set(handles.edit6,'BackgroundColor',[1 0 0]);

set(handles.edit0,'String',a);
set(handles.edit1,'String',b);
set(handles.edit2,'String',c);
set(handles.edit3,'String',d);
set(handles.edit4,'String',e);

% --- Executes on button press in timerbtn.
function timerbtn_Callback(hObject, eventdata, handles)
% hObject    handle to timerbtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA) 
t = handles.t;
bypass = 0;
if (strcmp(get(t,'Running'),'off') == 1)
    set(handles.edit6,'String','on');
    start(t);
    bypass = 1;
end
if (strcmp(get(t,'Running'),'on') == 1 && bypass == 0)
    set(handles.edit6,'String','off');
    stop(t);
end



function edit4_Callback(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double


% --- Executes during object creation, after setting all properties.
function edit4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

% --- Executes when user attempts to close figure1.
function figure1_CloseRequestFcn(hObject, eventdata, handles)
% hObject    handle to figure1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: delete(hObject) closes the figure
%delete(hObject);
s1 = handles.s1;
fclose(s1);
delete(timerfind);
clear global;
delete(handles.figure1);
close all;
disp('exiting...');

