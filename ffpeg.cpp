/*
#include <iostream>
#include <stdexcept>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavutil/imgutils.h>
}

int main() {
    AVFormatContext* formatContext = nullptr;
    AVCodecContext* codecContext = nullptr;
    AVCodec* codec = nullptr;
    AVFrame* frame = nullptr;
    AVPacket packet;
    SwsContext* swsContext = nullptr;
    int videoStreamIndex = -1;
    const char* videoFilePath = "nome_do_video.mp4";

    // Inicializar o FFmpeg
    av_register_all();

    // Abrir o arquivo de v�deo
    if (avformat_open_input(&formatContext, videoFilePath, nullptr, nullptr) != 0) {
        std::cerr << "Erro ao abrir o arquivo de v�deo" << std::endl;
        return 1;
    }

    // Obter informa��es do formato
    if (avformat_find_stream_info(formatContext, nullptr) < 0) {
        std::cerr << "Erro ao obter informa��es do formato do v�deo" << std::endl;
        return 1;
    }

    // Encontrar o stream de v�deo
    for (unsigned int i = 0; i < formatContext->nb_streams; i++) {
        if (formatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            videoStreamIndex = i;
            break;
        }
    }

    // Verificar se foi encontrado o stream de v�deo
    if (videoStreamIndex == -1) {
        std::cerr << "N�o foi encontrado o stream de v�deo" << std::endl;
        return 1;
    }

    // Obter o codec e o contexto do codec
    codec = avcodec_find_decoder(formatContext->streams[videoStreamIndex]->codecpar->codec_id);
    if (!codec) {
        std::cerr << "N�o foi poss�vel encontrar o codec" << std::endl;
        return 1;
    }

    codecContext = avcodec_alloc_context3(codec);
    if (!codecContext) {
       
*/
