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

    // Abrir o arquivo de vídeo
    if (avformat_open_input(&formatContext, videoFilePath, nullptr, nullptr) != 0) {
        std::cerr << "Erro ao abrir o arquivo de vídeo" << std::endl;
        return 1;
    }

    // Obter informações do formato
    if (avformat_find_stream_info(formatContext, nullptr) < 0) {
        std::cerr << "Erro ao obter informações do formato do vídeo" << std::endl;
        return 1;
    }

    // Encontrar o stream de vídeo
    for (unsigned int i = 0; i < formatContext->nb_streams; i++) {
        if (formatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            videoStreamIndex = i;
            break;
        }
    }

    // Verificar se foi encontrado o stream de vídeo
    if (videoStreamIndex == -1) {
        std::cerr << "Não foi encontrado o stream de vídeo" << std::endl;
        return 1;
    }

    // Obter o codec e o contexto do codec
    codec = avcodec_find_decoder(formatContext->streams[videoStreamIndex]->codecpar->codec_id);
    if (!codec) {
        std::cerr << "Não foi possível encontrar o codec" << std::endl;
        return 1;
    }

    codecContext = avcodec_alloc_context3(codec);
    if (!codecContext) {
       
*/
