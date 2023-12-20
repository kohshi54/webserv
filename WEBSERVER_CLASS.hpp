class Webserver
{
	public:
		setUp(); // confファイルを読み込んでサーバーの設定と立ち上げ
		acceptRequest(); // リクエストを受け付ける
		HTTPMessage parseHTTPRequest( std::string request ); // リクエストメッセージをパースする
		generateCGIRequest(); // CGIがターゲットならCGIを実行
		receiveCGIResponse(); // CGIの実行結果を受け付ける	
		generateHTTPResponse( HTTPMessage request ); // レスポンスを生成する
		generateHTTPResponse( CGIResponse response ); // レスポンスを生成する
		sendResponse(); // クライアントへレスポンスを送信する
	
	private:
		std::map<std::string sessionId, Data data> sessions[];
		
};

enum Method
{
	"GET",
	"POST",
	"HEAD",
	"DELETE"
};

class HTTPMessage
{
	public:
		parseMethod();
		parseVersion();
		parseTarget();
		parseHeaderField();
		parseBody();

	private:
		Method method;
		Version version;
		Target target;
		std::string body;
};

HTTPMessage Webserver::parseHTTPRequest ( std::string request )
{
	HTTPMessage *newMessage = new HTTPMessage;
	newMessage.parseMethod();
	newMessgge.parseVersion();
	newMessage.parseTarget();
	newMessage.parseHeaderField();
	newMessage.parseBody();

	return newMessage;
}

HTTPResponseMessage Webserver::generateHTTPResponse( HTTPMessage request )
{
	HTTPResponse *newResponse = new HTTPResponse;
	newResponse.generateHeader();
	newResponse.generateBody();

	return newReponse;
}

HTTPResponseMessage Webserver::generateHTTPResponse( CGIResponse response )
{
	HTTPResponse *newResponse = new HTTPResponse;
	newResponse.generateHeader();
	newResponse.generateBody();

	return newReponse;
}
